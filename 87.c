#include<stdio.h>
void main()
{
  int a,b;
  printf("enter the numbers");
  scanf("%d%d",&a,&b);
  while(a!=b)
  {
    if(a>b)
    a=a-b;
    else
    b=b-a;
  }
  printf("%d",a);
}
