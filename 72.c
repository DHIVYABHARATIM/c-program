#include "stdio.h"
#include"string.h"
int main(void)
{
  char a[50];
  int i;
  printf("enter the strings");
  scanf("%s",a);
  for(i=0;a[i]!='\0';i++)
  {
  if((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u'))
  {
    printf("yes,it contains vowel");
  }
  }
  else
  printf("it does not contains a vowel");
}
}
