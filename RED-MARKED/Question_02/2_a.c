#include <stdio.h>
int a=0,b=1;
int funct1(int a);
int func2(int b);
int main()
{
    int count;
    for(count = 1; count <= 5; ++count)
    {
        b += funct1(a + 1) + 1;
        printf("%d ", b);

    }
}
int funct1(int a)
{
    b = func2(a + 1) + 1;
    return(b);
}
int func2(int a)
{
    return(b + a);

}

//Output is:9 25 57 121 249
