#include <stdio.h>

int main() {
    int per;
    printf("Enter percentage: ");
    scanf("%d", &per);

    if (per >= 90 && per <= 100)
        printf("Grade A");
    else if (per >= 80 && per <= 89)
        printf("Grade B");
    else if (per >= 70 && per <= 79)
        printf("Grade C");
    else if (per >= 60 && per <= 69)
        printf("Grade D");
    else if (per < 60 && per >= 0)
        printf("Grade F");
    else
        printf("Invalid percentage");

    return 0;
}
