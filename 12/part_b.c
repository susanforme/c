#include <stdio.h>

// 引用式声明 外部链接
extern int count;
// 静态定义 内部链接
static int total = 0;
// k具有快作用域 无链接
void accumulate(int k)
{
  // 静态 无链接
  static int subtotal = 0;
  if (k <= 0)
  {
    printf("part_b file-- loop cycle is %d.\n", count);
    printf("subtotal is %d;total is %d.\n", subtotal, total);
    subtotal = 0;
  }
  else
  {
    subtotal += k;
    total += k;
  }
}