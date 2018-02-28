#include "stdio.h"
#include"string.h"

int main(void)
{
  char a[50];
  int i,j,l,count=0;
  printf("enter the string");
  scanf("%s",a);
  l=strlen(a);
  for(i=0;i<=l;i++)
  {
    for(j=i+1;j<=l;j++)
    {
      if(a[i]==a[j])
        count=1;
    }
    if(count==1)
    {
    printf("no");
    break;
    }
  else
  {
  printf("yes");
    break;
}}}
