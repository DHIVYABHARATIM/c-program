#include "stdio.h"

int main(void) 
{
int a=0,n,rem;
printf("enter the number ");
scanf("%d",&n);
while(n!=0)
{
  rem=n%10;
  a=a*10+rem;
  n=n/10;
}
printf("%d",a);
}

