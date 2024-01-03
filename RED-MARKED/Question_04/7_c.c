#include <stdio.h>
#include <stdbool.h>
int nonrepeated(int x[], int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		bool found = false;
		for (int j = 0; j < n; j++)
		{
			if ((i != j) && (x[i] == x[j]))
			{
				found = true;
				break;
			}
		}
		if (found == false)
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
	int count = nonrepeated(a, n);
	printf("Number of non-repeated elements in the sorted array: %d", count);
	return 0;
}
