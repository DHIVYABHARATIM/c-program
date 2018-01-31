#include<stdio.h>
void main()
{
int c,d;
char a[30],b[30];
printf("enter the strings");
scanf("%s",a);
scanf("%s",b);
c=strlen(a);
d=strlen(b);
{
if(c>d)
printf("%s",a);
else if(d>c)
printf("%s",b);
else
printf("%s%s",a,b);
}
}
