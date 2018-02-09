#include "stdio.h"
int main()
{
  int i,n;
  char s[20];
  printf("enter the string");
  scanf("%s",s);
  printf("enter the limit");
  scanf("%d",&n);
  for(i=0;i<=n-1;i++)
  {
    printf("%c",s[i]);
  
  }
}
