#include <stdio.h>

int main(void) {
    int a, b, c;
    printf("Enter first integer:");
    scanf("%d", &a);
    printf("Enter second integer:");
    scanf("%d", &b);
    printf("Enter third integer:");
    scanf("%d", &c);
    int max = a > b ? (a > c ? a : c) : (b > c ? b : c);
     printf("Largest = %d\n", max);
    return 0;
}