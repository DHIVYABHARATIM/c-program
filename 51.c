
#include <stdio.h>
void main()
{
	int n,r,s=0,a=0;
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		s=s*10+r;
		n=n/10;
		
	}
	while(n!=0)
	{
		a=s%10;
		printf("%d",a);
		s=s/10;
	}

}
