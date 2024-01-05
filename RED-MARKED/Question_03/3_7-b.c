//Reads n and Prints An
//7(b)


#include<stdio.h>
int main()
{

  int a1=1,a2=2,a3=3,an;
  int n;
  printf("Enter n : ");
  scanf("%d",&n);

  if(n >3)
  {
    an=(n-2) + 2 * (n-3);
    printf("a_%d is %d",n,an);

  }

  else if(n ==1)
  {
    printf("a_1 is 1");
  }
  else if(n ==2)
  {
    printf("a_2 is 2");
  }
  else if(n ==3)
  {
    printf("a_3 is 3");
  }


  return 0;
}




//As the values of a1=,a2=2,a3=3,the problem was easier to solve.
//But if the values are changed,
//the way of solving this will be changed accordingly.
//This solution is not for universal value of a1,a2,a3.
//It only works for this individual program.
