//Write a C program to find the factorial of a number using a while loop.
#include <stdio.h>
int main() 
{
    int n, i = 1;
    int fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 0) 
    {
        printf("Factorial not defined for negative numbers\n");
        return 0;
    }
    while (i <= n)//If n is 0 this condition fails and we directly go to print 1 as 0! is 1
    {
        fact *= i;
        i++;
    }
    printf("The factorial of %d is %d\n", n,fact);
    return 0;
}