#include<stdio.h>
int nonrepeated (int x[],int n)
{
	int	value=n;
	for(int i=0;i<n-1;i++)
	{
		if(x[i]==x[i+1])
		{
			value--;
		}
	}
	return value;
}

	int main(){
		int n;
		printf("Enter the number of elements of Array:");
		scanf("%d",&n);

	int a[n];

	printf("Enter the elements of Array :\n");
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}

		printf("Unsorted Array:\n");
		for(int i=0;i<n;i++)
		{
			printf("%d\t",a[i]);
		}
		printf("\n");

		int temp;
		for(int i=0; i<n-1; i++)
		{ 
			for(int j=0;j<n-1;j++)
			{
				if(a[j]>a[j+1])
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
		printf("Sorted Array:\n");
		for(int i=0;i<n;i++)
		{
			printf("%d\t",a[i]);
		}
		printf("\n");

		int count= nonrepeated(a,n);
		printf("number of non-repeated elements in the sorted array: %d\n",count);

		return 0;
	}
