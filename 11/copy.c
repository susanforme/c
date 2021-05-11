#include <stdio.h>
#include <strings.h>
#define LIMIT 5
#define SIZE 40

int main(void)
{
  char strs[LIMIT][SIZE];
  char temp[SIZE];
  int i = 0;
  printf("请输入首字母为q的单词\n");
  // puts返回值为0
  while (i < LIMIT && fgets(temp, SIZE, stdin))
  {
    // 等价于 strncmp(temp,"q",1)
    if (temp[0] != 'q')
    {
      puts("输入错误请重新输入!.");
    }
    else
    {
      puts("请再次输入首字母为q的单词.");
      // 将第二个的值复制到第一个
      strcpy(strs[i], temp);
      i++;
    }
  }
  puts("结果为");
  for (int j = 0; j < LIMIT; j++)
  {
    fputs(strs[j], stdout);
  }
  return 0;
}