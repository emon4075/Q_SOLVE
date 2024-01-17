/* 
Compile using gcc (or clang) from the terminal. 
What happens, or what do you encounter?
Compare this case against others. And what do you do now?

-- Kazi Ashrafuzzaman
*/

#include<stdio.h>

int subtraction(int a, int b) {
    int result;
    result = a-b;
    return result;
}

int main()
{
    int p, q, diff;
    printf("Enter two integers: ");
    scanf("%d%d", &q, &p);
    diff = subtraction(q, p);
    printf("Subtraction demo: %d minus %d equals %d \n", q, p, diff);
    return 0;
}

