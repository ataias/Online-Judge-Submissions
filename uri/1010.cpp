#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  int ID, N;
  double price;
  double TOTAL = 0;

  for(int i = 0; i < 2; i++) {
    cin >> ID >> N >> price;
    TOTAL += N*price;
  }

  printf("VALOR A PAGAR: R$ %.2f\n", TOTAL);

  return 0;
}
