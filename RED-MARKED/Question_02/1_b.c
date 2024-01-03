#include <stdio.h>

int main()
{
    int mm, dd, yy;
    printf("Enter date (mm-dd-yy): ");
    scanf("%d-%d-%d", &mm, &dd, &yy);
    int day = (int)(30.42 * (mm - 1)) + dd;
    if (mm == 2)
    {
        day=day+1;
    }
    else if (mm > 2 && mm < 8)
    {
        day=day-1;
    }
    if ((yy%4 == 0) && mm > 2)
    {
        day=day+1;
    }
    day=day+(yy/4)*1461;
    day=day+(yy%4)*365+1;
    printf("%d\n",day);
    return 0;
}

