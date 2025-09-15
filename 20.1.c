#include <stdio.h>
int main() {
    int n, d, p = 1, f = 0;
    scanf("%d", &n);
    while(n > 0) {
        d = n % 10;
        if(d % 2 != 0) {
            p = p * d;
            f = 1;
        }
        n = n / 10;
    }
    if(f == 0) 
        printf("0");
    else 
        printf("%d", p);
    return 0;
}
