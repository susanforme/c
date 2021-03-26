#include <stdio.h>
int main(void)
{
  const float f_n1 = 3.0;
  const double d_n2 = 3.0;
  const long l_n3 = 2000000000;
  const long l_n4 = 1234567890;

  printf("%.1e %.1e %.1e %.1e\n", f_n1, d_n2, l_n3, l_n4);
  printf("%ld %ld\n", l_n3, l_n4);
  // ld 打印浮点数失败
  printf("%ld %ld %ld %ld\n", f_n1, d_n2, l_n3, l_n4);
  return 0;
}