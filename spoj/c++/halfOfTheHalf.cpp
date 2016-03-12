#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;

  for(int i = 0; i < n; i++) {
    string word;
    cin >> word;
    int twoK = word.size();
    int k = twoK/2;
    for(int j = 0; j < k; j+=2) {
      cout << word.at(j);
    }
    cout << endl;
  }

  return 0;
}
