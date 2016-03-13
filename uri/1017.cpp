#include <iostream>
#include <cstdio>

using namespace std;

int main() {
  int t, speed;
  cin >> t;
  cin >> speed;

  double liters = speed*t/12.0;
  printf("%.3f\n", liters);
  return 0;
}
