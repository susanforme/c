#include <stdio.h>

// 函数声明， 返回类型为int，形式参数为int
int getNumb(int num)
{
  return num + 3;
}

void sayHi(void)
{
  printf("hi!");
}

int main(void)
{
  printf("i get %d\n", getNumb(30));
  sayHi();
}
