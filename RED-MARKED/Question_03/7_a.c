// Enter a Number Less Than 0 to Terminate The Loop
#include <stdio.h>
int main()
{
  // do-while loop
  int sum = 0, num;
  scanf("%d", &num);
  do
  {
    sum += num;
    // printf("Sum = %d\n",sum);
    scanf("%d", &num);
  } while (num >= 0);
  return 0;
}
