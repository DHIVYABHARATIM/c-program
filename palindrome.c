#include <stdio.h>
void main()
{
    int n, a = 0,rem;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while( n!=0 )
    {
        rem = n%10;
        a = a*10 + rem;
        n =n/ 10;
    }

   
    if (n == a)
        printf(" num is a palindrome");
    else
        printf("num  is not a palindrome");
   
}
