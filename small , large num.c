#include<stdio.h>
void main()
{
int a[10],temp,i,j,n;
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{ 
for(j=i+1;j<=10;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
printf("%d%d",a[0],a[n-1]);
}
}
}
