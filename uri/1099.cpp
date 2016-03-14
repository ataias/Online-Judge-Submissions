#include <iostream>
using namespace std;

int max(int a, int b) {
  return a > b ? a : b;
}

int min(int a, int b) {
  return a > b ? b : a;
}

int main() {
  int N; cin >> N;
  for(int i = 0; i < N; i++) {
    int X, Y; cin >> X >> Y;
    int sum = 0;
    for(int j = min(X,Y) + 1; j < max(X,Y); j++) {
      if (j % 2 == 1) sum += j;
    }
    cout << sum << endl;
  }

  return 0;
}
