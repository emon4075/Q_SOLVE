#include<stdio.h>
int main()
{
  int a=5,b=5;

  if(a=b)
  {

    printf("The if statement is executed");
  }

  else {

    printf("The if statement didn't executed");
  }



  return 0;
}
/* if any if statement is given like if(a=b),then it will execute when 
 * the value of both a and b would be assigned before this statement.
 * */
