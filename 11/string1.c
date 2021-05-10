// 字符串函数
#include <stdio.h>
#include <string.h>
#define LIMIT 10

void fit(char *str, int size)
{
  if (strlen(str) > size)
  {
    str[size] = '\0';
  }
}
int main(void)
{
  const char *str = "hello world";
  char str1[11] = "hi my love";
  char str2[] = "testtest";
  char answer[LIMIT];
  printf("%s,%d\n", str, strlen(str));
  printf("%s,%d\n", str1, strlen(str1));
  fit(str2, 5);
  puts(str2);
  // 第二个字符串的备份附加到第一个字符串的末尾,新字符串替代第一个字符串,第二字符串不变
  strcat(str1, str2);
  puts(str1);
  puts(str2);
  while (strcmp(answer, "q\n"))
  {
    puts("请输入亚索应该主修什么技能.");
    fgets(answer, LIMIT, stdin);
  }
  printf("答案正确.\n");
  return 0;
}
