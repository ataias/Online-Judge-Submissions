#include <iostream>
using namespace std;

int abs(int a) {
  return a < 0 ? -a : a;
}

int max(int a, int b) {
  return (a+b+abs(a-b))/2;
}

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  cout << max(a, max(b,c)) << " eh o maior" << endl;
 
  return 0;
}
