#include <stdio.h>

int main() {
    char name[50];   // array to store name
    int age;

    // Prompt user for name
    printf("Enter your name: ");
    scanf("%49s", name);  // read string (stops at space)

    // Prompt user for age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Print the details
    printf("Hello %s, you are %d years old.\n", name, age);

    return 0;
}