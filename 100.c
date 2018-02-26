#include "stdio.h"

int main(void) 
{
int a,b=1,c;
printf("enter the number ");
scanf("%d",&a);
while(a!=0)
{
c=a%10;
b=c*b;
a=a/10;
}
printf("%d",b);
}
