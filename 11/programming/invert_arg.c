// 反向显示字符串
#include <stdio.h>

int main(int argc, char *argv[])
{
  for (int i = argc; i > 1; i--)
  {
    printf("%s ", argv[i - 1]);
  }
  return 0;
}