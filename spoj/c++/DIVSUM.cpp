#include <iostream>
#include <vector>
#include <tuple>
#include <set>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <map>
using namespace std;


//It is working! Time limit exceeded was solved using "map" to store values already computed

// $ ./a.out
// 2
// 500000
// 730453
// 600000
// 1384248

void printSet(set<unsigned> s) {
  for(auto it = std::begin(s); it != std::end(s); ++it)
    cout << *it << " ";
  cout << endl;
}

void getFactor(vector<tuple<unsigned,unsigned>> *primeTuples, set<unsigned> *divisors, unsigned start, unsigned acc) {
  if(primeTuples->size() <= start){
    (*divisors).insert(acc);
    return;
  }

  auto element = primeTuples->at(start);
  for(unsigned i = 0; i <= get<1>(element); i++) {
    getFactor(primeTuples, divisors, start + 1, acc*pow(get<0>(element), i));
  }

}

bool isPrime(unsigned n, set<unsigned> *primes){
  if (n == 2) return true;

  for(auto it = std::begin(*primes); it != std::end(*primes); ++it){
    if (*it > sqrt(n) + 1) break;
    if(n % *it == 0) return false;
  }

  return true;
}

int main() {
  unsigned cases = 0;
  cin >> cases;

  //Dynamic programming: saving last results
  std::map<unsigned, unsigned> valueToSum;


  //Get primes up to 1000
  set<unsigned> primes;
  unsigned sqrtV = 500000;
  for(unsigned i = 2; i < sqrtV; i++)
    if(isPrime(i, &primes)){
      primes.insert(i);
      // cout << "Added: " << i << endl;
    }

  // cout << "primes: " << endl;
  // printSet(primes);

  vector<unsigned> primeFactors;
  set<unsigned> divisors;

  for(unsigned i = 0; i < cases; i++){
    unsigned long number, copyNumber, sum;
    cin >> number;

    //verify if solved before
    try {
      sum = valueToSum.at(number);
      cout << sum << endl;
      continue;
    } catch(const std::out_of_range& e) {

    }

    copyNumber = number;

    auto search = primes.find(number);
    if(search != primes.end()) {
      cout << 1 << endl;
      continue;
    }

    //This gives all the prime factors
    for (auto it = std::begin(primes); it!=std::end(primes); ++it){
      if (*it > copyNumber) break;

      while(true)
        if(copyNumber % *it == 0) {
          primeFactors.push_back(*it);
          copyNumber = copyNumber / *it;
        } else {
          break;
        }
    }

    //Get a vector of tuples
    vector<tuple<unsigned, unsigned>> primeTuples;
    unsigned m = 0;
    while(m < primeFactors.size()) {
        unsigned v = primeFactors.at(m);
        unsigned n = count(std::begin(primeFactors), std::end(primeFactors), v);
        auto t = make_tuple(v,n);
        primeTuples.push_back(t);
        m += n;
    }

    getFactor(&primeTuples, &divisors, 0, 1);

    sum = accumulate(std::begin(divisors), std::end(divisors), 0);

    if(number == 0) sum = 0;

    sum = sum - number; //number was added in the process above
    cout << sum << endl;

    valueToSum[number] = sum;

    // //important! clear before next number
    divisors.clear();
    primeFactors.clear();
  }

  return 0;
}
