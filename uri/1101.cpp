#include <iostream>
using namespace std;

int max(int a, int b) {
  return a > b ? a : b;
}

int min(int a, int b) {
  return a > b ? b : a;
}

int main() {
  int M, N;
  while(true) {
    cin >> M >> N;
    if (M <= 0 || N <= 0) break;
    int sum = 0;
    for(int i = min(M,N); i <= max(M,N); i++){
      cout << i << " ";
      sum += i;
    }
    cout << "Sum=" << sum << endl;
  }

  return 0;
}
