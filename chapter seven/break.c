// 用户输入长宽，然后计算
#include <stdio.h>

int main(void)
{
  double length, width;
  while (printf("请输入长度。\n") && scanf("%lf", &length) == 1)
  {
    printf("请输入宽度。\n");
    if (scanf("%lf", &width) != 1)
    {
      printf("无效宽高！\n");
      break;
    }
    printf("宽为%.4lf高为%.4lf的矩形面积为%.4lf。\n", width, length, width * length);
  }
  printf("拜拜拜拜!");
  return 0;
}