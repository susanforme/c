void ranking(double *x, double *y, double *z)
{
  // 先确定最小值
  double temp;
  if (*x > *y)
  {
    temp = *x;
    *x = *y;
    *y = temp;
  }
  if (*x > *z)
  {
    temp = *x;
    *x = *z;
    *z = temp;
  }
  if (*y > *z)
  {
    temp = *y;
    *y = *z;
    *z = temp;
  }
}
