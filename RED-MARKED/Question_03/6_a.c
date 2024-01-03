/*
At first the code that is written in the if portion it will be true thats why the body will be
executed. Though it is not compairing the values but it will still work because the assignment
operation will be done successfully.
But if we make the variable a constant or define as macro then there will be a error issued by
compiler.
*/
#include <stdio.h>
// # define a 5
int main()
{
  // int const a = 5, b = 6;
  int a = 5, b = 6;
  if (a = b)
  {
    printf("%d\n", a);
    printf("The if statement is executed");
  }
  return 0;
}
