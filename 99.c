#include "stdio.h"

int main(void) 
{
int a,b,c,n,d;
printf("enter the numbers ");
scanf("%d%d%d",&a,&b,&c);
n=a*b;
d=n%c;
printf("%d",d);
}
