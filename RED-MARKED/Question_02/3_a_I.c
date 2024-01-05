#include <stdio.h>
#define N 10
int A[N];
int main()
{
    printf("Enter an The Array Elements: ");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("The Elements Are: ");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}