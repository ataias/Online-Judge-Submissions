#include <iostream>
#include <vector>
#include <set>
using namespace std;

// $ ./a.out
// 2
// 500000
// 730453
// 600000
// 1384248

bool isPrime(int n){
  for(int i = 2; i < n; i++){
    if(n % i == 0) return false;
  }

  return true;
}

int main() {
  int cases = 0;
  cin >> cases;

  //Get primes up to 1000
  vector<int> primes;
  int sqrt1000000 = 1000;
  for(int i = 2; i < sqrt1000000; i++) {
    if(isPrime(i))
      primes.push_back(i);
  }

  // for(int i = 0; i < primes.size(); i++){
  //   cout << primes.at(i) << endl;
  // }

  // cout << primes.size() << endl;

  vector<int> primeFactors;
  set<int> divisors;

  for(int i = 0; i < cases; i++){
    unsigned number, copyNumber;
    cin >> number;
    copyNumber = number;

    //This gives all the prime factors
    for (auto it = begin(primes); it!=end(primes); ++it){
      if (*it > number) break;

      while(true)
        if(copyNumber % *it == 0) {
          primeFactors.push_back(*it);
          copyNumber = copyNumber / *it;
        } else {
          break;
        }
    }

    if(number > 1) divisors.insert(1);

    //this should give me all the divisors (broken so far)
    for (int j = 0; j < primeFactors.size(); j++) {
      divisors.insert(primeFactors.at(j));
      unsigned divisor = primeFactors.at(j);

      for (int k = j + 1; k < primeFactors.size(); k++) {
        divisor *= primeFactors.at(k);
        divisors.insert(divisor);
      }
    }

    unsigned long sum = 0;
    for(auto it = begin(divisors); it!=end(divisors); ++it){
      cout << *it << " ";
      sum += *it;
    }
    cout << endl;
    sum = sum - number; //number was added in the process above
    cout << sum << endl;
    //important! clear before next number
    divisors.clear();
    primeFactors.clear();
  }

  return 0;
}
