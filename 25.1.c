#include <stdio.h>
int main() {
    int i, j, start;
    for(i=5; i>=1; i--) {
        start = i;
        for(j=i; j<=5; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
