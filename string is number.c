#include<stdio.h>
void main()
{
 char str[50];
 int i,len = 0,count = 0;
 printf("enter any string");
 scanf("%s",str);
 len = strlen(str);
 for(i=0;i<len;i++)
 {
 if(str[i] >= 0&& str[i] <= 9)    
 {
 count++;
 }
 }
 printf("yes");
 }
	
