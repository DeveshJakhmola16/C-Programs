#include <stdio.h>

int main() {
    int a, b, result;
    char op;
    printf("Enter first number:\n");
    scanf("%d", &a); 
    printf("Enter second number:\n");
    scanf("%d", &b);
    printf("Enter operator (+ - * /):\n");
    scanf(" %c", &op); 
    switch (op) {
        case '+':
            result = a + b;
            printf("Result: %d\n", result);
            break;
        case '-':
            result = a - b;
            printf("Result: %d\n", result);
            break;
        case '*':
            result = a * b;
            printf("Result: %d\n", result);
            break;
        case '/':
            if (b == 0) {
                printf("Error:Undefined\n");//Division by zero is not possible
            } else {
                result = a / b;
                printf("Result: %d\n", result);
            }
            break;
        default:
            printf("Invalid operator\n");
    }
return 0;
}