#include <stdio.h>
#define STLEN 8

int main(void)
{
  char words[STLEN];
  puts("输入字符串 空行为关闭.");
  while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
  {
    fputs(words, stdout);
  }
  return 0;
}