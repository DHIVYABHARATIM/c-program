#include "stdio.h"

int main(void) 
{
 int n,k,i,a[40];
 printf("enter the number\n");
 scanf("%d%d",&n,&k);
 printf("enter the numbers\n");
 for(i=1;i<=n;i++)
 {
   scanf("%d",&a[i]);
   }
   printf("%d",a[k]);
}
