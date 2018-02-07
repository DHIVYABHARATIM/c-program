#include<stdio.h>
int main()
{
int f=1,s=1,limit,i,n;
printf("enter the limit");
scanf("%d",&limit);
printf("%d\t%d",f,s);
for(i=2;i<limit;i++)
{
n=f+s;
f=s;
s=n;
printf("%d\t",n);
}
}
