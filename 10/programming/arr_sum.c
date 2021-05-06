void sum_arr(double *source1, double *source2, double *target, int n)
{
  for (int i = 0; i < n; i++)
  {
    *(target + i) = *(source1 + i) + *(source2 + i);
  }
}