#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Display before swapping
    printf("\nBefore swapping: a = %d, b = %d", a, b);

    // Swapping without third variable
    a = a + b;  
    b = a - b;  
    a = a - b;  

    // Display after swapping
    printf("\nAfter swapping: a = %d, b = %d", a, b);

    return 0;
}
