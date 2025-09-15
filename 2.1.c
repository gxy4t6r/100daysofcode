#include <stdio.h>

int main() {
    int length, breadth;
    int area, perimeter;

    // Input length and breadth
    printf("Enter length of rectangle: ");
    scanf("%d", &length);

    printf("Enter breadth of rectangle: ");
    scanf("%d", &breadth);

    // Calculations
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    // Output results
    printf("\nArea of rectangle = %d", area);
    printf("\nPerimeter of rectangle = %d", perimeter);

    return 0;
}
