#include<stdio.h>
int main()
{
char text[80]="University Of Chittagong, Depertment Of Computer Science And Engineering.";
printf("%18s\n",text);
//This statement prints the string with a minimum field width of 18 characters. If the string is shorter than 18 characters, it will be right-justified, adding spaces to the left.
printf("%.18s\n",text);
//This statement prints only the first 18 characters of the string.
printf("%18.7s\n",text);
//This statement prints a maximum of 7 characters from the string, right-justified in a field of width 18. If the string is shorter than 7 characters, it will be padded with spaces to the left.
printf("%-18.7s\n",text);
//The string is left-justified, and the total width is 18 characters. The first 7 characters of the string are printed, followed by spaces to meet the minimum width of 18.
}
//Output:
//University Of Chittagong, Depertment Of Computer Science And Engineering.
//University Of Chit
//           Univers
//Univers
26 changes: 26 additions & 0 deletions 
