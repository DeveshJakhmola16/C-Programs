#include <stdio.h>

int main() {
    int number, digit, sum = 0;

    // Input a 4-digit number
    printf("Enter a four-digit number: ");
    scanf("%d", &number);

    // Extract and add digits
    digit = number % 10;     // last digit
    sum += digit;
    number = number / 10;

    digit = number % 10;     // third digit
    sum += digit;
    number = number / 10;

    digit = number % 10;     // second digit
    sum += digit;
    number = number / 10;

    digit = number % 10;     // first digit
    sum += digit;

    // Display the result
    printf("Sum of digits = %d\n", sum);

    return 0;
}
