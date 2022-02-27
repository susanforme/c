#include <stdio.h>
int main(void)
{
  // const 变量
  const double RENT = 3852.99;
  // 默认右对齐，-左对齐
  printf("%2.2f\n", RENT);
  printf("%1.2f\n", RENT);
  printf("%e\n", RENT);
  printf("%3.1f\n", RENT);
  printf("%6.2f\n", RENT);
  printf("左对齐 %-10.2f\n", RENT);
  printf("右对齐 %10.2f\n", 9.99);
  printf("补齐0 %010.2f\n", RENT); // 0补齐
  return 0;
}