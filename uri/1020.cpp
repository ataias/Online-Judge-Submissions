#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;

  cout << N/365 << " ano(s)" << endl;
  N = N - (N/365)*365;

  cout << N/30 << " mes(es)" << endl;
  N = N - (N/30)*30;

  cout << N << " dia(s)" << endl;
  return 0;
}
