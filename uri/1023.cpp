#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <map>
#include <cmath>

using namespace std;

int main() {

  map<int,int> person_consume;

  int i = 0;
  while(true) {
    i++;
    int N, X, Y;
    cin >> N;
    if (N == 0) break;

    double persons = 0, cubic_meters = 0;
    for(int i = 0; i < N; i++) {
      cin >> X >> Y;
      // person_consume.push_back(make_tuple(X, Y/X));
      try {
        person_consume[Y/X] += X;
      } catch (const std::out_of_range& e) {
        person_consume[Y/X] = X;
      }
      persons += X;
      cubic_meters += Y;
    }

    if (i > 1) cout << endl;
    cout << "Cidade# " << i << ":" << endl;
    for (auto it = person_consume.cbegin(); it != person_consume.cend(); ++it) {
      cout << it->second << "-" << it->first;
      cout << ((it != (--person_consume.cend())) ? " " : "\n"); //detect if it is last iteration
    }
    printf("Consumo medio: %.2f m3.\n", floorf(cubic_meters*100/persons)/ 100) ;


    person_consume.clear();
  }

  return 0;
}
