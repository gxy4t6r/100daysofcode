#include <stdio.h>

int main() {
    int num1, num2;
    int sum, difference, product;
    float quotient;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculations
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    if (num2 != 0) {
        quotient = (float)num1 / num2;
    } else {
        quotient = 0;  // To handle division by zero
    }

    // Output results
    printf("\nSum = %d", sum);
    printf("\nDifference = %d", difference);
    printf("\nProduct = %d", product);

    if (num2 != 0) {
        printf("\nQuotient = %.2f", quotient);
    } else {
        printf("\nQuotient = Undefined (division by zero)");
    }

    return 0;
}
