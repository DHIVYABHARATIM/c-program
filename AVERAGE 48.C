#include<stdio.h>
void main()
{
int n,i, a[200],count=0,b=0,c;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
b=b+a[i];
}
c=b/n;
printf("%d",c);
}
