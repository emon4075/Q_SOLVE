#include <stdio.h>
#include <math.h>
int main()
{
    int R, C;
    printf("Enter Row & Coloumn: ");
    scanf("%d %d", &R, &C);
    int Mid = ceil(C / 2.0);
    for (int i = 1; i <= R; i++)
    {
        for (int j = 1; j <= C; j++)
        {
            if (i % 2 == 1)
            {
                if (j == Mid)
                {
                    printf(" O ");
                }
                else
                {
                    printf(" $ ");
                }
            }
            else if (i % 2 == 0)
            {
                if (j == Mid)
                {
                    printf(" $ ");
                }
                else
                {
                    printf(" * ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}