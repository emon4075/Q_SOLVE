#include <stdio.h>
int digit(int n, int k) {

  while (k-- > 1) {
    if ((n /= 10) <= 0)
      return 0;
  }
  return n % 10;
}
int main()
{
  int N,K;
  scanf("%d %d",&N,&K);
  printf("digit(N,K) = %d\n", digit(N,K));
  return 0;
}
