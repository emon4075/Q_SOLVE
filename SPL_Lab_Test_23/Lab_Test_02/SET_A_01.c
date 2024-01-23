/*
 * Lab_Test-02
 * Set-A
 * Problem-01
 */
#include <stdio.h>
#include <math.h>
int main()
{
    int R, C;
    printf("Enter Row & Column: ");
    scanf("%d %d", &R, &C);
    int Space = ceil(R / 2.0);
    int One = C - 1;
    for (int i = 1; i <= R; i++)
    {
        for (int j = 1; j <= C; j++)
        {
            if (i == Space && j == Space)
            {
                printf("* ");
            }
            else if (i + j == (R + 1))
            {
                printf("0 ");
            }
            else if (i == Space && (j == C || j == 1))
            {
                printf("  ");
            }
            else if (i + j > R + 1)
            {
                printf("-1 ");
            }
            else
            {
                printf("1 ");
            }
        }
        printf("\n");
    }
    return 0;
}
