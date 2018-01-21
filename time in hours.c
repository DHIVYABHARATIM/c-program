#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the minute");
scanf("%d",&a);
while(a>=60)
{
b=a/60;
  c=a%60;
printf(" %d%d",b,c);
}
}
