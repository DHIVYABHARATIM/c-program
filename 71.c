#include "stdio.h"
#include"string.h"
int main(void)
{
  char a[50];char b[50],strrev();
  printf("enter the strings");
  scanf("%s",a);
  strcpy(b,a);
  strrev(a);
if((strcmp(a,b)==0)
  printf("yes,it is palindrome");
  else
  printf("not palindrome");
  return 0;
  
}
