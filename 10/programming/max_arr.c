// 返回double中的最大值

int max(double *arr, int n)
{
  double max = 0;
  int max_index = -1;
  for (int i = 0; i < n; i++)
  {
    if (max < arr[i])
    {
      max = arr[i];
      max_index = i;
    }
  }
  return max_index;
}