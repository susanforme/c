#include <stdio.h>

// 命令参数
int main(int argc, char *argv[])
{
  printf("这个命令行有%d个参数.\n", argc - 1);
  for (int i = 0; i < argc; i++)
  {
    printf("%d-%s\n", i, argv[i]);
  }
  return 0;
}