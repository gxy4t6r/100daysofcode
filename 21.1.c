#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, middle, result;
    scanf("%d", &num);
    digits = (int)log10(num);
    first = num / (int)pow(10, digits);
    last = num % 10;
    middle = (num % (int)pow(10, digits)) / 10;
    result = last * (int)pow(10, digits) + middle * 10 + first;
    printf("%d", result);
    return 0;
}
