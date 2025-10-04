//Write a C program using a loop to check if a number is prime or not.
#include <stdio.h>
int main() 
{
    int n, i;
    int isPrime = 1; //Here isPrime acts like a flag and we are initializing it to 1 which means we are assuming the number is prime
    printf("Enter a number:");
    scanf("%d", &n);
    if (n <= 1)
    {
        printf("%d is not a prime number.\n", n);//0 and 1 are not prime numbers
        return 0;
    }
        for (i = 2; i <= n/2; i++)//We are testing up to n/2 as after n/2 we won't find any divisors
    {
        if (n % i == 0)
        {
            isPrime = 0; //It is not a prime number as we found a divisor
            break;       
        }
    }
    if (isPrime==1)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number as it is divisible by %d.\n", n, i);
    return 0;

}
