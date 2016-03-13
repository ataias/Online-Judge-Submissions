#include <stdio.h>

// Source of algorithm:
// https://en.wikipedia.org/wiki/Josephus_problem
int f(int n, int k) {
  if (n == 1) return 1;
  return ((f(n-1,k) + k - 1) % n) + 1;
}

int main() {
  int NC;
  scanf("%d", &NC);

  int i = 0;
  for(i = 0; i < NC; i++) {
    int n, k;
    scanf("%d %d", &n, &k);

    int survivor = f(n,k);
    printf("Case %d: %d\n", i+1, survivor);
  }

  return 0;
}
