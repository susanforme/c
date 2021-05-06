// 返回double类型数组中的最大值的下标

int max(int arr[], int n)
{
  int max = 0;
  for (int i = 0; i < n; i++)
  {
    max = max > arr[i] ? max : arr[i];
  }
  return max;
}