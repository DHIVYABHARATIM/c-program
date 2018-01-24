#include <stdio.h>
#include<conio.h>
void main()
{
char str[200];
int i=0;count =0;
printf("enter the paragraph\n");
while(str[i]!='\0')
{
if(str[i]=='.')
count++;
i++;
}
printf("number of lines %d",count+1);
}
