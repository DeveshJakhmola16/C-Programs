#include <stdio.h>

int main() {
    int num;

    // Input a number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check even or odd using bitwise AND and ternary operator
    (num & 1) ? printf("%d is Odd\n", num) : printf("%d is Even\n", num);
    return 0;
}