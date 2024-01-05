#include <stdio.h>
int countDistinct(int list[], int listLength)
{
    if (listLength <= 0)
    {
        return 0;
    }
    int count = 1;
    for (int i = 1; i < listLength; i++)
    {
        if (list[i] != list[i - 1])
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int n;
    printf("Enter the number of elements of Array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements in Ascending Order : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int count = countDistinct(a, n);
    printf("Number of Distinct elements in the sorted array: %d", count);
    return 0;
}
