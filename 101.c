#include "stdio.h"

int main(void) 
{
  int a,i,b,c,n;
  printf("enter the string");
  scanf("%d",&a);
  printf("enter the number");
  scanf("%d",&n);
  while(n!=0)
  {
    b=a;
    c=a%10;
    printf("%d",c);
    a=b/10;
    n--;
  }
 
}
