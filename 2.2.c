#include <stdio.h>
#define PI 3.14   // Defining constant value of PI

int main() {
    float radius, area, circumference;

    // Input radius
    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    // Calculations
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // Output results
    printf("\nArea of circle = %.2f", area);
    printf("\nCircumference of circle = %.2f", circumference);

    return 0;
}
