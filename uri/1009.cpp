#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main() {
  string NAME;
  double BASE, SALES;

  cin >> NAME;
  cin >> BASE;
  cin >> SALES;

  const double RATE = 0.15;

  double TOTAL = BASE + SALES*RATE;
  printf("TOTAL = R$ %.2f\n", TOTAL);

  return 0;
}
