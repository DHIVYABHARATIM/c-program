#include<stdio.h>
void main()
{
int a=5;
int b=3;
printf("swapping");
a=a^b;
b=a^b;
a=a^b;
printf("%d",a,b);
}
