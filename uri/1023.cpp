#include <iostream>
#include <vector>
#include <tuple>
#include <cstdio>
#include <cstdlib>
#include <map>

using namespace std;

ostream& operator<<(ostream& os, const std::vector<std::tuple<int, int>>& v) {
  for(auto it = v.begin(); it != v.end(); ++it) {
    os << get<0>(*it) << "-" << get<1>(*it);
    if(it != v.end()) os << " ";
  }
  return os;
}

int main() {

  vector<tuple<int, int>> person_consume;

  int i = 0;
  while(true) {
    i++;
    int N, X, Y;
    cin >> N;
    if (N == 0) break;

    double persons, cubic_meters;
    for(int i = 0; i < N; i++) {
      cin >> X >> Y;
      person_consume.push_back(make_tuple(X, Y/X));
      persons += X;
      cubic_meters += Y;
    }

    //Sort person_consume
    //do not use "&person_consume" with an stl vector. Use .data instead
    qsort(person_consume.data(), person_consume.size(), sizeof &person_consume,
      [](const void* a, const void* b){
        auto arg1 = get<1>(*static_cast<const tuple<int,int>*>(a));
        auto arg2 = get<1>(*static_cast<const tuple<int,int>*>(b));
        return (arg1 > arg2) - (arg1 < arg2);
    });

    if (i > 1) cout << endl;
    cout << "Cidade# " << i << ":" << endl;
    cout << person_consume << endl;
    printf("Consumo medio: %.2f m3.\n", cubic_meters/persons);


    person_consume.clear();
  }

  return 0;
}
