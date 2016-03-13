#include <iostream>
#include <cstdio>

using namespace std;

int main() {
  int N, HOURS;
  double perHourSalary;
  cin >> N;
  cin >> HOURS;
  cin >> perHourSalary;

  printf("NUMBER = %d\n", N);
  printf("SALARY = U$ %.2f\n", perHourSalary*HOURS);

  return 0;
}
