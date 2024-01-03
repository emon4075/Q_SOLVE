#include <stdio.h>
int main()
{
  int i = 'c';
  printf("%d\n", i);
  return 0;
}

/*
 * Yes.We can assign a character constant into a integer vriable.
 * If we assign a character into a int type variable,
 * the variable will read the ascii value of that character.
 * For example if we assign character 'c' into a int type variable,
 * it will print '99' which is the ASCII value of the character 'c'.
 * 
 */
