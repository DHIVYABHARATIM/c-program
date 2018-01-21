#include <stdio.h>

void main()
{
int n,a,d,counter=1;
printf("enter the number of elements");
scanf("%d",&n);
printf("enter the first term");
scanf("%d",&d);
while(counter<=n);
{
	a=1+(counter-1)*d;
	printf("%d",a);
}
counter++;
}
