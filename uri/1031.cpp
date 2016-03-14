#include <iostream>
#include <cstdio>
using namespace std;

#define N 1000

void initArray(int *array, int n){
  int i;
  for(i = 0; i < n; i++) {
    array[i] = i+1;
  }
}

void next(int *array, int k, int *j, int original_n){
  array[*j] = -1;
  while(k > 0) {
    *j = (*j + 1) % original_n;
    if (array[*j] != -1) {
      k--;
    }
  }

}

int findLast(int *array, int original_n) {
  int i;
  for(i = 0; i < original_n; i++){
    if(array[i] != -1) return array[i];
  }

  return -1;
}

int f(int *array, int n, int k) {
  initArray(array, n);
  int original_n = n;

  // int j = k - 1; //Josephus
  int j = 0; //it is different of Josephus
  while(n > 1) {
    next(array, k, &j, original_n);
    n--;
  }
  return findLast(array, original_n);
}


int main() {
  int n;
  int regions[N];
  while(true) {
      cin >> n;
      if (n == 0) break;
      for (int i = 1; i < 3*n; i++) {
        if( f(regions, n, i) == 13) {
          cout << i << endl;
          break;
        }
      }

  }

  return 0;
}
