void reverse(double *arr, int n)
{
  double temp;
  for (int i = 0; i < n / 2; i++)
  {
    temp = *(arr + i);
    *(arr + i) = *(arr + n - i - 1);
    *(arr + n - i - 1) = temp;
  }
}