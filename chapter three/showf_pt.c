#include <stdio.h>
int main(void)
{
  float about = 0;
  double abet = 2.14e9;
  long double dip = 5.32e-5;
  // 无穷大
  float tooBig = 33e49 * 3.12f;
  printf("%f can be written %e.\n", about, about);
  printf("And it is  %a in hexadecimal, powers of 2 notation. \n", about);
  printf("%f can be written %e. \n", abet, abet);
  printf("%Lf can be written %Le.\n", dip, dip);
  // 输出inf
  printf("%e is so big!\n", tooBig);
  return 0;
}