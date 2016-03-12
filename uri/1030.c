#include <stdio.h>

//now compiles, but time limit exceeded all the time

#define N 10000

#define true 1
#define false 0

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


int main() {
  int NC;
  scanf("%d", &NC);

  int i = 0; int original_n;
  int people[N];
  for(i = 0; i < NC; i++) {
    int n, k;
    scanf("%d %d", &n, &k);
    original_n = n;
    initArray(people, original_n);

    int j = k-1;
    while(n > 1) {
      next(people, k, &j, original_n);
      n--;

    }
    printf("Case %d: %d\n", i+1, findLast(people, original_n));

  }

  return 0;
}
