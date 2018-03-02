#include "stdio.h"
#include"string.h"

int main(void)
{
  char a[50];
  int i,j,l,count=0,b[10],c,temp=0;
  scanf("%s",a);
  for(i=0;i<3;i++)
  {
    scanf("%d",&b[10]);
    if(b[i]==b[j])
    temp=1;
  }
  if(temp==0)
    printf("yes");
  else
  printf("no");
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
}}
  
}
