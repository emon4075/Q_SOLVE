#include <stdio.h>
#include <stdbool.h>
int main()
{
    printf("Size of Integer Data Type: %zu Bytes\n", sizeof(int));
    printf("Size of Float Data Type: %zu Bytes\n", sizeof(float));
    printf("Size of Double Data Type: %zu Bytes\n", sizeof(double));
    printf("Size of Long Data Type: %zu Bytes\n", sizeof(long));
    printf("Size of Character Data Type: %zu Bytes\n", sizeof(char));
    printf("Size of Boolean Data Type: %zu Bytes\n", sizeof(bool));
    return 0;
}
