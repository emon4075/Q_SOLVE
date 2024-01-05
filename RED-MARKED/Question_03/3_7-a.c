#include<stdio.h>
int main()
{
//do while loop
  int sum=0,num;
  scanf("%d",&num);
  do{
    sum += num;
    //printf("Sum = %d\n",sum);
    scanf("%d",&num);


  }
  while(num >= 0);


  /*

  //while loop
int sum=0,num;
  scanf("%d",&num);

while (num >=0)
{
sum += num;
//printf("Sum = %d",sum);
scanf("%d", &num);
}
*/




return 0;
}
