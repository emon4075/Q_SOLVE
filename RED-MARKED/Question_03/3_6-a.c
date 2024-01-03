#include<stdio.h>
int main()
{
  int const a=5,b=6;

  //if(a=b)
  if(a==b)
  {

    printf("The if statement is executed");
  }

  else {

    printf("The if statement didn't executed");
  }



  return 0;
}
/*The condition  will be exicuted when we put '==' instead of '='.
This basically compares two value of 'a' and 'b'.If both values are equal,
then the 'printf' statement executes.
If we put a single equal sign(=),
the statement checks if the value of 'b' can be or not store in 'a'.
As both are same type variable,the if statement finds the condition true.
So the printf function execute in this case also.*/
