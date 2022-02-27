#include <stdio.h>

double convert(double weight);

int main(void)
{
  double weight;
  printf("please input your weight.\n");
  // 需要指针类型做参数，地址符转换为指针类型传入，%lf输入双浮点
  scanf("%lf", &weight);
  // %f输出
  printf("wow , your weight(%.2lf) in gold is worth ￥ %.2lf!\n", weight, convert(weight));
  return 0;
}
double convert(double weight)
{
  return weight * 1000 * 325;
}