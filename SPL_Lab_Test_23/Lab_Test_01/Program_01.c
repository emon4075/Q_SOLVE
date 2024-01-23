#include <stdio.h>
int main()
{
    int TempHigh, TempMin, Humidity, RainFall, SunShine, count = 0;
    scanf("%d", &TempHigh);
    scanf("%d", &TempMin);
    scanf("%d", &Humidity);
    scanf("%d", &RainFall);
    scanf("%d", &SunShine);
    if (TempHigh >= 31 && TempHigh <= 34)
    {
        count++;
    }
    if (TempMin >= 22 && TempMin <= 23)
    {
        count++;
    }
    if (Humidity >= 89 && Humidity <= 92)
    {
        count++;
    }
    if (RainFall >= 0 && RainFall <= 10)
    {
        count++;
    }
    if (SunShine >= 6 && SunShine <= 9)
    {
        count++;
    }
    if (count > 3)
    {
        printf("High\n");
    }
    else if (count == 3)
    {
        printf("Moderate\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}