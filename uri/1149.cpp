#include <iostream>
using namespace std;

int main() {
  int A; cin >> A;
  int N = 0; while ( N <= 0) {cin >> N;}

  int sum = 0;
  while (N > 0) {
    sum += A;
    A++;
    N--;
  }

  cout << sum << endl;

  return 0;
}
