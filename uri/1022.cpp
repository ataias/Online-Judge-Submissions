#include <iostream>
#include <string>

using namespace std;

int abs(int n) {
  if (n < 0) return -n;
  return n;
}

void simplify(int *n1, int *n2) {
  if (*n1 == 0 || *n2 == 0) return;
  int maxDiv = 1;
  for(int i = 1; i <= abs(*n1); i++){
    if(*n1 % i == 0 && *n2 % i == 0){
      maxDiv = i;
    }
  }
  *n1 = *n1 / maxDiv;
  *n2 = *n2 / maxDiv;
}

int main() {
  int N;
  cin >> N;


  while(N > 0) {
    N--;

    //fractions:
    // a / b + c / d
    int a, b, c, d;
    string op; string slash;
    cin >> a; cin >> slash; //ignore slash
    cin >> b;
    cin >> op;
    cin >> c; cin >> slash; //ignore slash
    cin >> d;

    int num, den;
    if(op == "+") {
      num = a*d + c*b;
      den = b*d;
    }

    if(op == "-") {
      num = a*d - c*b;
      den = b*d;
    }

    if(op == "*") {
      num = a*c;
      den = b*d;
    }

    if(op == "/") {
      num = a*d;
      den = b*c;
    }


    cout << num << "/" << den << " = ";
    simplify(&num, &den);
    cout << num << "/" << den << endl;
    }
}
