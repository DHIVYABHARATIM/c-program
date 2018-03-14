#include<stdio.h>
void main()
{
  int n,k,a[100],i;
  printf("enter the  2  numbers");
  scanf("%d%d",&n,&k);
  printf("enter the numbers for checking");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
    if(a[i]==k)
    printf("yes");
  }
}
