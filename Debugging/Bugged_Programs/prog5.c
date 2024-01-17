/* 
Compile using gcc (or clang) from the terminal. 
What happens, or what do you encounter? What do you do now?
Compare this case against others.

-- Kazi Ashrafuzzaman
*/

#include<stdio.h>

int subtraction(int a, int b) {
    int result;
    result -= a-b;
    return result;
}

int main()
{
    int p, q, diff;
    printf("Enter two integers: ");
    scanf("%d%d", &p, &q);
    diff = subtraction(q, p);
    printf("Subtraction demo: %d minus %d equals %d \n", p, q, diff);
    return 0;
}

