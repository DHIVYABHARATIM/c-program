#include<stdio.h>
void main()
{
  int n,k,a[100],i,count=0;
  printf("enter the  2  numbers");
  scanf("%d%d",&n,&k);
  printf("enter the numbers for checking");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    if(a[i]==k)
      count++;
  }
    printf("%d",count);
  }

