#include "stdio.h"

int main(void)
{
  int n,i,a[50];
  printf("enter the  no .of numbers");
  scanf("%d",&n);
  printf("enter the elements");
  for(i=1;i<=n;i++)
  {
  scanf("%d",&a[i]);
  }
  for(i=1;i<=n;i++)
  {
  if(i!=a[i])
  printf("%d",i);
  else
  printf("%d",a[i]);
  }
}
