#include <stdio.h>

int main() {
    int a, b, x, y, lcm;
    scanf("%d %d", &a, &b);
    x = a;
    y = b;
    while (a != b) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    lcm = (x * y) / a;
    printf("%d", lcm);
    return 0;
}
