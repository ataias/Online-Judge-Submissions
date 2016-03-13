#include <iostream>
using namespace std;

int main() {
  double x;
  cin >> x;

  if (x < 0.0 || x > 100.0) {
    cout << "Fora de intervalo" << endl;
    return 0;
  }

  cout << "Intervalo ";
  if (x >= 0.0 && x <= 25.0) {
    cout << "[0,25]" << endl;
  } else if (x > 25 && x <= 50) {
    cout << "(25,50]" << endl;
  } else if (x > 50.0 && x <= 75.0) {
    cout << "(50,75]" << endl;
  } else if (x > 75.0 && x <= 100.0) {
    cout << "(75,100]" << endl;
  }

  return 0;
}
