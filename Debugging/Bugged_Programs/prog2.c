/* 
Compile using gcc (or clang) from the terminal. 
What happens, or what do you encounter?
Compare this experience against prog1.c, prog3.c and others.
*** Neovim will give the answer away if you have LSP plugins configured/installed. ***
-- Kazi Ashrafuzzaman
*/

#include<stdio.h>

int addition(int a, int b) {
    int result;
    result = a+b;
    printf("Added together, %d and %d make %d\n", a, b, result);
}

int main()
{
    int a1, a2, sum;
    printf("Enter two integers: ");
    scanf("%d%d", &a1, &a2);
    addition(a1, a2);
    return 0;
}

