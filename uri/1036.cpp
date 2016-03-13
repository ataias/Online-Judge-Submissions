#include <cstdio>
#include <cmath>

bool is_nan(double x) { return x != x; }

using namespace std;

int main() {
  double A, B, C;
  scanf("%lf", &A);
  scanf("%lf", &B);
  scanf("%lf", &C);

  double delta = sqrt(B*B - 4*A*C);

  if(is_nan(delta) || A == 0.0){
    printf("Impossivel calcular\n");
    return 0;
  }

  double r1 = (-B + delta)/(2*A);
  double r2 = (-B - delta)/(2*A);

  printf("R1 = %.5f\n", r1);
  printf("R2 = %.5f\n", r2);
  return 0;
}
