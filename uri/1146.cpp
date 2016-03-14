#include <iostream>
using namespace std;

int main() {
  int X;
  do {
    cin >> X;
    if (X == 0) break;

    for (int i = 1; i <= X; i++) {
      cout << i;
      cout << ( (i == X) ? "\n" : " ");
    }
  } while (X != 0);

  return 0;
}
