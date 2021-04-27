// 课后6.16
#include <stdio.h>
#include <string.h>

void first();
void second();
void third();
void forth();
void fifth();
void sixth();
void seventh();

int main(void)
{
  seventh();
  return 0;
}
void first()
{
  const int length = 26;
  char letter[length];
  for (int i = 0; i < length; i++)
  {
    letter[i] = 'a' + i;
  }
  for (int i = 0; i < length; i++)
  {
    printf("%c,", letter[i]);
  }
}
void second()
{
  const int num = 5;
  for (int i = 0; i < num; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      printf("$");
    }
    printf("\n");
  }
}
void third()
{
  const int num = 6;
  for (int i = 0; i < num; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      printf("%c", 'F' - j);
    }
    printf("\n");
  }
}
void forth()
{
  const int num = 6;
  char let = 'A';
  for (int i = 0; i < num; i++)
  {
    let += i;
    for (int j = 0; j <= i; j++)
    {
      printf("%c", let + j);
    }
    printf("\n");
  }
}
// 输入大写字母返回倒金字塔
void fifth()
{
  char letter;
  printf("please enter a letter.\n");
  scanf("%c", &letter);
  for (int i = 0; i <= letter - 'A'; i++)
  {
    for (int j = 0; j <= letter - 'A' - i; j++)
    {
      printf(" ");
    }
    for (char c = 'A'; c <= i + 'A'; c++)
    {
      printf("%c", c);
    }
    for (char c = i + 'A' - 1; c >= 'A'; c--)
    {
      printf("%c", c);
    }
    printf("\n");
  }
}
void sixth()
{
  int low_num, high_num;
  printf("please input a low_num.\n");
  scanf("%d", &low_num);
  printf("then , you need input a low_num.\n");
  scanf("%d", &high_num);
  for (int i = low_num; i < high_num; i++)
  {
    printf("i(%3d) 平方是%4d，立方是%4d.\n", i, i * i, i * i * i);
  }
}
void seventh()
{
  char str[30];
  printf("please input a word!\n");
  scanf("%s", str);
  for (int i = strlen(str); i >= 0; i--)
  {
    printf("%c", str[i]);
  }
}