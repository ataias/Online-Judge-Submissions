#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n;
  cin >> n;

  for(int i = 0; i < n; i++){
    int v; cin >> v;
    unsigned sum = 0;
    for(int j = 1; j < sqrt(v); j++){
      if (v % j == 0) {
        // cout << j << " ";
        sum += j;
      }
    }
    cout << sum << endl;
  }

  return 0;
}
