#include <stdio.h>
int main(void)
{
  double inch;
  printf("how many inches do you want to convert?\n");
  scanf("%d", &inch);
  printf("you get %d centimeter", inch * 2.54);
  getchar();
  return 0;
}