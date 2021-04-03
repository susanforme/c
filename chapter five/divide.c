#include <stdio.h>
int main(void)
{
  int i_a = 5, i_b = 3;
  // 截断
  printf("%d\n", i_a / i_b);
  // 浮点数
  printf("%.2f\n", 5.0f / i_b);
  return 0;
}