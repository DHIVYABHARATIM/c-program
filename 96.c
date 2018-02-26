#include "stdio.h"

int main(void) 
{
int a,i,flag=0;
printf("enter the number");
scanf("%d",&a);
for(i=2;i<=a/2;i++)
{
  if(a%i==0)
  flag=1;
}
if(flag==1)
printf("yes");
else
printf("no");
}
