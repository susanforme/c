// 返回double中的最大值与最小值之间的差值

double difference(double *arr, int n)
{
  double max = 0, min = arr[0];
  for (int i = 0; i < n; i++)
  {
    if (max < arr[i])
    {
      max = arr[i];
    }
    if (min > arr[i])
    {
      min = arr[i];
    }
  }
  return max - min;
}