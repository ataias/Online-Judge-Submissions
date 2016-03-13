#include <iostream>
using namespace std;

int main() {
  int value;
  cin >> value;

  cout << value << endl;
  cout << value/100 << " nota(s) de R$ 100,00" << endl;
  value = value - (value/100)*100;

  cout << value/50 << " nota(s) de R$ 50,00" << endl;
  value = value - (value/50)*50;

  cout << value/20 << " nota(s) de R$ 20,00" << endl;
  value = value - (value/20)*20;

  cout << value/10 << " nota(s) de R$ 10,00" << endl;
  value = value - (value/10)*10;

  cout << value/5 << " nota(s) de R$ 5,00" << endl;
  value = value - (value/5)*5;

  cout << value/2 << " nota(s) de R$ 2,00" << endl;
  value = value - (value/2)*2;

  cout << value << " nota(s) de R$ 1,00" << endl;

  return 0;
}
