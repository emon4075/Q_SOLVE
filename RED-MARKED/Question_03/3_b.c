#include <stdio.h>
int main()
{
  char u, v = 'A';
  char *pu, *pv = &v;

  // printf("%p\n", &v);

  printf("*pv=%c\n", *pv);

  *pv = v + 1; // value of v(A) + 1 (char) == B
  // printf("%c",*pv);
  u = *pv + 1; // value of pv(B) +1 == C  // pv == B
  // printf("%c",u);
  printf("Location of pv=%d\n", pv); // address of pv. pv=B
  pu = pv;                           // adress pu=pv  which can't be true.Two pointer can't store in same memory address
  pu = &u;                           // adress of u. (u == C)
  // printf("%c",*pu);
  printf("*pv = %c\n", *pv); // Value stored in *pv = B
  printf("*pu = %c\n", *pu);
  printf("location of pu = %d\n", pu); // memory location of pu or u. u == C
  return 0;
}

/*
i->
 Here, pu=pv is invalid.Because the address of two different pointers can't be the same.

ii->
 &v represents the address where the character 'A' is stored. Simply denotes the memory address of 'A'.

iii->
 Here pv is a pointer which holds &v which denotes the memory address where the character 'A' is stored.

iv->
 *pv represents the value assigned to the memory location pv.
 Here at first *pv = 'A' and then *pv = 'B'.

 v->
 *pu represents the value assigned to the memory location pu.
 Here, u='C'. So,*pu=C.
*/
