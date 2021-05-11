#include <stdio.h>
#include <string.h>
#define WORD "beast"
#define SIZE 60
int main(void)
{
  // strcpy返回的是第一个参数的地址.第一个参数不必指向数组的开始
  const char *orig = WORD;
  char copy[SIZE] = "be the best that you can be.";
  char *ps;
  char *nps;
  ps = strcpy(copy + 7, orig);
  // 第三个参数检查容纳的最大大小
  nps = strncmp(copy + 7, orig, SIZE);
  puts(copy);
  puts(ps);
  return 0;
}