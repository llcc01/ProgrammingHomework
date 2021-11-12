#include <math.h>
#include <stdio.h>

const double eps = 1e-8;

double Exp(double x) {
  double ans = 1, now = 1;
  for (int i = 1; ; ++i) {
    // 因为想不到 0 次项怎么处理于是干脆初始化了算了
    now = now * x / i;
    if (fabs(now) < 1e-8) break; // 哎这个为啥会是负数啊，用 fabs 干啥（
    ans += now;
  }
  return ans;
}

int main() {
  double x;

  scanf("%lf", &x);
  printf("%.4f\n", Exp(x));
  return 0;
}