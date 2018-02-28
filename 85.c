#include "stdio.h"

int main(void)
{
  char a[50];
  int n;
  int i;
  printf("enter the string");
    scanf("%s",a);
  n=strlen(a);
for(i=0;i<=n;i++)
{
  if((i%2)==0)
  printf("%c",a[i]);
 }
 printf("   ");
 for(i=0;i<=n;i++)
 {
   if((i%2)==1)
   printf("%c",a[i]);
 }
}
