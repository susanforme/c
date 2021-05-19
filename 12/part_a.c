#include <stdio.h>

// 文件作用域 外部链接
int count = 0;
void report_count()
{
  printf("loop %d times.\n", count);
}
void accumulate(int k);
int main(void)
{
  // 自动变量
  int value;
  puts("put a number 0 to quit.");
  while (scanf("%d", &value) == 1 && value > 0)
  {
    ++count;
    // 寄存器变量
    for (register int i = value; i >= 0; i--)
    {
      accumulate(i);
    }
  }
  report_count();
  return 0;
}