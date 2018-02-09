#include<stdio.h>
#include<string.h>
int main()
{
  int i,count=1;
  char a[50]="how are you";
  for(i=0;a[i]!='\0';i++)
  {
 if(a[i]==' ')
 {
  count=count+1;
  }
}
 printf("%d",count);
  }

