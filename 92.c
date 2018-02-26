#include "stdio.h"

int main(void) 
{
  int n,i,sum=0,a[50];
  printf("enter the no.of numbers\n");
  scanf("%d",&n);
  printf("enter the numbers\n");
  for(i=0;i<=n-1;i++)
  {
    scanf("%d",&a[i]);
   sum=sum+a[i];
    }
    printf("%d\n",sum);
    }
