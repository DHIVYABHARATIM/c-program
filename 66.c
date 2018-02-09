#include<stdio.h>

int main()
{
 int i,n,flag=0;
 scanf("%d",&n);
 for(i=2;i<=n/2;i++)
 {
   if((n%i==0))
   flag++;
 }
 if(flag==0)
  printf("prime");
  else
  printf("not prime");
 }
