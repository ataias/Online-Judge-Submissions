#include <iostream>
#include <cstdio>
#include <map>

using namespace std;

int main() {
  map<int,double> price;

  price[1] = 4.0;
  price[2] = 4.50;
  price[3] = 5.00;
  price[4] = 2.00;
  price[5] = 1.5;

  int id, n;
  cin >> id >> n;
  cout << "Total: R$ ";
  double TOTAL = price[id]*n;
  printf("%.2f\n", TOTAL);

  return 0;
}
