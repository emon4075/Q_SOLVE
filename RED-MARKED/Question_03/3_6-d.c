//3(C)
//Armstrong Number Between 100-999

#include<stdio.h>
int main()
{
int x;
int i,j,k;
int a,b,c;
long l;
for(x=100;x<=999;x++)
 {
  a=x/100;
  b=x%10;
  c=(x/10)%10;

  i=a*a*a;
  j=b*b*b;
  k=c*c*c;
  l=i+j+k;

  //printf("%d ",x);
  //printf("%d%d%d ",a,b,c);
  //printf("%d %d %d ",i,j,k);
  //printf("%ld\n",l);

    if(l==x)
    {
    printf("%d\n",x);
    }



  }



  }




