#include "stdio.h"
#include"string.h"
int main(void)
{
  char a[50];
  int i,count=0;
  printf("enter the string");
  scanf("%s",a);
  for(i=0;a[i]!='\0';i++)
{
   if((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u'))
   count=count+1;
}
if(count!=0)
    printf("yes,it contains vowel");
 else
 printf("no ,it doenot contains vowel");
}

