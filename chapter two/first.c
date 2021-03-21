// 预处理指令
#include <stdio.h>
int main(void)
{
  const int num = 3;
  // \n 的意思是换行，new line
  printf("i am %d\n", 33);
  // 等待击键，在用户按下一个键后才会结束程序
  getchar();
  // int main 意义为返回整形，虽然可以忽略，但是为统一代码风格，应保留
  return 0;
}