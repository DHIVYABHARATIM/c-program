#include "stdio.h"

int main(void)
{
 int a,n,t;
 printf("enter the number");
 scanf("%d",&a);
 while(a!=0)
 {
n=a%10;
 a=a/10;
if((n%2)!=0)
printf("%d\t",n);
}

 }
