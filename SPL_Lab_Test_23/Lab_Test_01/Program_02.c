// Point Placed Circle
#include <stdio.h>
#include <math.h>
int main()
{
    int X, Y;
    int r = 7;
    float Distance;
    scanf("%d %d", &X, &Y);
    Distance = sqrt(((X - 5) * (X - 5)) + ((Y - 7) * (Y - 7)));
    if (Distance <= r)
    {
        printf("Inside The Circle.\n");
    }
    else
    {
        printf("Outside The Circle\n");
    }
    return 0;
}