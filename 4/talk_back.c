#include <stdio.h>
// 提供strlen()
#include <string.h>
// 人体密度 字符常量
#define DENSITY 2.64
int main(void)
{
  float weight, volume;
  int size, letters;
  // 容纳40个字符的数组
  char name[40];
  printf("Hi ! What is your name .\n");
  // %s处理字符串 string
  scanf("%s", name);
  printf("%s,What is your weight in pounds?\n", name);
  scanf("%f", &weight);
  size = sizeof(name);
  letters = strlen(name);
  volume = weight / DENSITY;
  printf("well ,%s,your volume is %2.2f cubic feet. \n", name, volume);
  printf("Also , your first name has %d letters,\n", letters);
  printf("and we have %d bytes to store it . \n", size);
  return 0;
}