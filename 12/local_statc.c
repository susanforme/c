#include <stdio.h>
void try_stat(void)
{
  int fade = 1;
  static int stay = 1;
  printf("fade的地址是%3p,递增后的值为%d\nstay的地址是%3p,递增后的值为%d,.\n", &fade, fade++, &stay, stay++);
}
int main(void)
{
  int c;
  printf("%d\n", c);
  for (int i = 0; i < 3; i++)
  {
    try_stat();
  }
  return 0;
}