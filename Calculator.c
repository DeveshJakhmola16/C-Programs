// Write a C program for a simple calculator that repeatedly asks the user for two numbers and an operation (+, -, *, /) until the user chooses to exit. Must use a do while loop to repeat until exit.
#include <stdio.h>
int main()
{
    double a,b,result;
    char op;
    char cont='y';
    printf("Simple Calculator(Enter 'q' as operation to quit immediately)\n");
    do
    {
        printf("Enter first number: ");
        scanf("%lf",&a);
        printf("Enter second number: ");
        scanf("%lf",&b);
        printf("Enter operation (+, -, *, /) or 'q' to quit: ");
        scanf(" %c",&op);
        if(op=='q' || op=='Q')
        {
           printf("Quitting\n");
           break;
        }
        switch(op)
        {
            case '+':
                result=a+b;
                printf("Result: %lf\n",result);
                break;
            case '-':
                result=a-b;
                printf("Result: %lf\n",result);
                break;
            case '*':
                result=a*b;
                printf("Result: %lf\n",result);
                break;
            case '/':
                if(b==0.0)
                {
                    printf("Error: Division by zero!\n");
                }else{
                    result=a/b;
                    printf("Result: %lf\n",result);
                }
                break;
            default:
                printf("Invalid operation.\n");
        }
        printf("Do you want to perform another calculation? (y/n): ");
        scanf(" %c",&cont);
    }
    while(cont=='y' || cont=='Y');
    printf("Goodbye!\n");
    return 0;
}