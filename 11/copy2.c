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
  // 此处必须数组形式声明,否则 sprintf会报错
  char formal[SIZE];
  ps = strcpy(copy + 7, orig);
  // 第三个参数检查容纳的最大大小
  nps = strncpy(copy + 7, orig, 4);
  puts(copy);
  puts(ps);
  sprintf(formal, "%s,%p", copy, copy);
  puts(formal);
  return 0;
}