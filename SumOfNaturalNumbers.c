//Write a program in C to calculate the sum of the first n natural numbers using a for loop
#include <stdio.h>
int main() 
{
    int n;
    int sum = 0;//We need to initialize sum as 0
    printf("Enter a natural number n: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; ++i)
     {
        sum += i;
     }
    printf("Sum of first %d natural numbers = %d\n", n, sum);
    return 0;
}
