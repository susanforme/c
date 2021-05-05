#include <stdio.h>
int main(void)
{
  char ch;
  int i;
  float f1;
  int mice;
  ch = i = f1 = 'C';
  printf("%c,%d,%2.2f.\n", ch, i, f1);
  ch = ch + 1;
  i = f1 + 2 * ch;
  f1 = 2.0 * ch + i;
  printf("ch = %c , i = %d , f1 = %2.2f .\n", ch, i, f1);
  // 类型转换溢出 1107 对256做求模运算
  ch = 1107;
  printf("Now ch is %c.\n", ch);
  // 截断
  ch = 80.89;
  printf("Now ch is %c.\n", ch);
  // (type) var强制类型转换 ， 最好不要进行类型转换
  mice = (int)1.6f + (int)1.7f;
  printf("mice is %d", mice);
  // 强制类型转换
  return 0;
}