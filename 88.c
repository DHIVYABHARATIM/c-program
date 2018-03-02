#include "stdio.h"

int main(void)
{
  int i,a,b,c=0;
  printf("enter the numbers");
  scanf("%d%d",&a,&b);
  for(i=2;i<=1000;i++)
  {
    if(i%a==0&&i%b==0)
    {
   c=i;
   break;
    }
}
printf("%d",c);
  }
