/*
	6.(a)
	What is the output of the following code segment (write NO OUTPUT if you think
	there is an error in the program segment)?
	int i = 4, j = 5, k;
	k=i+++j;
	printf("%d %d %d, i, j, k);

	--> There is an error in this program segment . That is there is no end Quotation mark in the 						 		 printf function .If there is an end Quotation mark in the printf function then the Output will be : i=5,j=5,k=9;

*/

#include <stdio.h>
int main()
{
	int i = 4, j = 5, k;
	k = i++ + j;
	printf("%d %d %d\n", i, j, k);
	return 0;
}
