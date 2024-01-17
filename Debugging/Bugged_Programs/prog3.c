/* 
Compile using gcc (or clang) from the terminal. 
What happens, or what do you encounter? What do you do now?
Compare this experience against prog1.c, prog3.c and others.

-- Kazi Ashrafuzzaman
*/

#include<stdio.h>

int addition(int a, int b) {
    int result;
    result += a+b;
    return result;
}

int main()
{
    int a1, a2, sum;
    printf("Enter two integers: ");
    scanf("%d%d", &a1, &a2);
    sum = addition(a1, a2);
    printf("Added together, %d and %d make %d\n", a1, a2, sum);
    return 0;
}

