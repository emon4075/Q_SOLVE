/* 
Compile using gcc (or clang) from the terminal. 
What happens, or what do you encounter?
Compare this experience against prog2.c, prog3.c and others.
*** Neovim will give the answer away if you have LSP plugins configured/installed. ***
-- Kazi Ashrafuzzaman
*/

#include<stdio.h>

int addition(int a, int b) {
    int ret;
    ret = a+b;
    return ret;
}

int main()
{
    int a1, a2, sum;
    printf("Enter two integers: ");
    scanf("%d%d", &a1, &a2);
    sum = additian(a1, a2);
    printf("Upon adding %d and %d, we obtain %d\n", a1, a2, sum);
    return 0;
}
