//Write a program in C to count how many digits a number has using a while loop.
#include <stdio.h>
int main() 
{
    int n;
    int count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n == 0)//It is a speacial case as 0 has 1 digit
    {
        printf("Number of digits: 1\n");
        return 0;
    }
    if (n < 0)//If the number is negative we make it positive to count digits
    {
    n = -n;
    }
    while (n != 0) 
    {
        count++;
        n /= 10;
    }
    printf("Number of digits: %d\n", count);
    return 0;
}