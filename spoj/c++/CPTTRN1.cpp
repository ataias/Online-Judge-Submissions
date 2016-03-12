#include <iostream>

using namespace std;

// CPTTRN1 - Character Patterns (Act 1)
// #basics
// Using two characters: . (dot) and * (asterisk) print a chessboard-like pattern. The first character printed should be * (asterisk).
//
// Input
//
// You are given t < 100 - the number of test cases and for each of the test cases two positive integers: l - the number of lines and c - the number of columns in the pattern (l, c < 100).
//
// Output
//
// For each of the test cases output the requested pattern (please have a look at the example). Use one line break in between successive patterns.

int main() {
  int boards;
  cin >> boards;

  for(int i = 0; i < boards; i++){
    int l, c;
    cin >> l >> c;

    for(int k = 0; k < l; k++){
        for(int j = 0; j < c; j++){
          if( (j+k) % 2 == 0) {
            cout << "*";
          } else {
            cout << ".";
          }
        }
        cout << endl;
    }
    cout << endl;
  }

  return 0;
}
