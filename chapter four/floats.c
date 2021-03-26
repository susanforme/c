#include <stdio.h>
int main(void)
{
  // const 变量
  const double RENT = 3852.99;
  printf("%2.2f\n", RENT);
  printf("%1.2f\n", RENT);
  printf("%e\n", RENT);
  printf("%3.1f\n", RENT);
  printf("%+4.2f\n", RENT);
  printf("%-2.2f\n", RENT);
  printf("%010.2f\n", RENT);
  return 0;
}