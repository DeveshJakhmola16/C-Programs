#include <stdio.h>

int main() {
    int x = 5;

    // Initial value
    printf("Initial value of x = %d\n\n", x);

    // Post-increment
    printf("Using post-increment (x++):\n");
    printf("Value of x before post-increment = %d\n", x);
    printf("Value returned by x++ = %d\n", x++);
    printf("Value of x after post-increment = %d\n\n", x);

    // Reset x
    x = 5;

    // Pre-increment
    printf("Using pre-increment (++x):\n");
    printf("Value of x before pre-increment = %d\n", x);
    printf("Value returned by ++x = %d\n", ++x);
    printf("Value of x after pre-increment = %d\n", x);

    return 0;
}
