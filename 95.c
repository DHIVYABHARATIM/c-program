#include "stdio.h"

int main(void) 
{
 int p,t,r,f;
 printf("enter the principle amount,no.of years,rate of interest\n");
 scanf("%d%d%d",&p,&t,&r);
f=(p*t*r)/100;
printf("%d",f);
}
