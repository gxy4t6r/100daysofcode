#include <stdio.h>
int main() {
    int n,i,prod=1;
    scanf("%d",&n);
    for(i=2;i<=n;i+=2) {
        prod=prod*i;
    }
    printf("%d",prod);
    return 0;
}
