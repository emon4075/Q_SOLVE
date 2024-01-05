//Check if an array of bits is symmetrical or not
//Ques 3
//7(C)

#include<stdio.h>
int main()
{

int n,i=0,m,k,l;
printf("No of Bits =");
scanf("%d",&n);
int a[n];


  for(i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
  }


    m=n-1;
    l=n;
    k=0;
  for(i=0;i<l;i++)
  {


   // printf("a[%d] %d ",i,a[i]);
    // printf("a[%d] %d \n",m,a[m]);


     if(a[i]==a[m]  && i != m)
     {

    //printf("a[%d] %d ",i,a[i]);
    //printf("a[%d] %d \n",m,a[m]);

    //printf(" Symo\n");
     k++;
     }
  m--;
 }


if(k==n)
{
//printf("It is Symo");
printf("Yes");
}
else{

//printf("It is not  Symo");
printf("NO");
}

return 0;
}
