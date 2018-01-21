#include<stdio.h>
void main()
{
int a,b;
printf("enter the minute");
scanf("%d",&a);
while(a>=60)
{
b=a/60;
printf(" %d%d",b,a);
}
}
