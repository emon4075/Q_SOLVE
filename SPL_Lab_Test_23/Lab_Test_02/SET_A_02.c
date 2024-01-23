/*
 * Lab_Test-02
 * Set-A
 * Problem-02
 */
#include <stdio.h>
int Fun(int N)
{
    int Y;
    if (N == 0)
    {
        return 1;
    }
    Y = N * Fun(N - 1) + N;
    return Y;
}
int Check(int A[], int SZ, int X)
{
    for (int i = 0; i < SZ; i++)
    {
        if (X == A[i])
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int N;
    printf("Enter a Number: ");
    scanf("%d", &N);
    int SZ = N;
    int A[SZ];
    for (int i = 0; i < SZ; i++)
    {
        A[i] = Fun(N - 1);
        N--;
    }
    printf("%d\n", Check(A, SZ, 88));
    return 0;
}
