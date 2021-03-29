#include <stdio.h>

int main(void)
{
  short n;
  printf("Enter three integers.\n");
  scanf("%*d %*d %d", &n);
  printf("The last integer is %d.\n", n);
  return 0;
}