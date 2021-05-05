#include <stdio.h>

int main(void)
{
  unsigned int width, precision;
  int number = 256;
  double weight = 182.5;

  printf("enter a filed width.\n");
  scanf("%d", &width);
  printf("The number is :%*d:\n", width, number);
  printf("Now enter a width and precision!\n");
  scanf("%d %d", &width, &precision);
  printf("Weight = :%*.*f:\n", width, precision, weight);
  return 0;
}