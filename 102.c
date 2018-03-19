#include "stdio.h"

int main(void)
{
 int a[2],i;
 printf("enter the numbers");
 for(i=0;i<2;i++)
 {
   scanf("%d",&a[i]);
 }
 for(i=0;i<2;i++)
 {
   if((a[i]%2)==0)
   printf("%d\t",a[i]/2);
   else
   printf("%d",a[i]);
 }
}
