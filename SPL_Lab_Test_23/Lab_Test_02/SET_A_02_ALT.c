/*
 * Lab_Test-02
 * Set-A
 * Problem-02-Easiest_Way
 */
#include <stdio.h>
int Fun(int N)
{
    if (N == 0)
    {
        return 1;
    }
    return N * Fun(N - 1) + N;
}
int Check()
{
    int X;
    printf("Set a Target: ");
    scanf("%d", &X);
    return X;
}
int main()
{
    int N, Series, X;
    printf("Enter a Number: ");
    scanf("%d", &N);
    int SZ = N;
    X = Check();
    for (int i = 0; i < SZ; i++)
    {
        Series = Fun(N - 1);
        if (Series == X)
        {
            printf("1\n");
            return 0;
        }
        N--;
    }
    printf("0\n");
    return 0;
}
