// Symmetric or Not
#include <stdio.h>
int main()
{
  int n, i = 0, m, k, l;
  printf("No of Bits = ");
  scanf("%d", &n);
  int a[n];
  printf("Enter Bits Separated By Spaces: ");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  m = n - 1;
  l = n;
  k = 0;
  for (i = 0; i < l; i++)
  {
    if (a[i] == a[m] && i != m)
    {
      k++;
    }
    m--;
  }
  if (k == n)
  {
    printf("Yes");
  }
  else
  {
    printf("NO");
  }
  return 0;
}
