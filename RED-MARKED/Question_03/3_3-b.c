
#include<stdio.h>
int main()
{
  char u,v='A';
  char *pu, *pv=&v;

   printf("*pv=%c\n",*pv);

  *pv=v+1;      //value of v(A) +1 (char) ==B
 // printf("%c",*pv);

  u=*pv+1;    //value of pv(B) +1 ==C  //pv=B
  //printf("%c",u);

   printf("Location of pv=%d\n",pv);   //address of pv. pv=B
  pu=pv;  //adress pu=pv  which can't be true.Two pointer can't store in same memory address


  pu=&u;  //adress of u. u=C

  //printf("%c",*pu);

  printf("*pv = %c\n",*pv);   //Value stored in *pv  *pv=B
  printf("*pu = %c\n",*pu);
  printf("location of pu = %d\n",pu);   //memory location of pu/u. u=C




return 0;
}

/*
i/' pu=pv ' is invalid here.Cause address of two different pointers cn't be same.

ii/ &v  represents the value stored in the pointer '*pv'.
Here &v=A.

iii/pv represents the memory location of pointer *pv.
Here at 1st case,the character 'A' was assigned to pv.
Then,in 2nd case,Character 'B' was assigned to pv.

iv/ *pv represents the value assigned to the memeory location pv.
   Here at first *pv=A and then *pv=B.

 v/ *pu represents the value assigned to the memory location pu.
 Here, u='C'. So,*pu=C.


*/



