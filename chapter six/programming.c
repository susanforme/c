// 课后6.16
#include <stdio.h>
void first();
void second();
void third();
void forth();
void fifth();
void sixth();
void seventh();

int main(void)
{
  forth();
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
void fifth() {}
void sixth() {}
void seventh() {}