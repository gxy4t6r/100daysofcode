#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num >= 0) {
        if (num == 0)
            printf("Number is Zero");
        else
            printf("Number is Positive");
    } else {
        printf("Number is Negative");
    }

    return 0;
}
