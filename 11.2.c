#include <stdio.h>
int main() {
    float cp, sp, profit, loss;
    printf("Enter Cost Price: ");
    scanf("%f", &cp);
    printf("Enter Selling Price: ");
    scanf("%f", &sp);
    if(sp > cp) {
        profit = sp - cp;
        printf("Profit Percentage = %.2f", (profit / cp) * 100);
    } else if(cp > sp) {
        loss = cp - sp;
        printf("Loss Percentage = %.2f", (loss / cp) * 100);
    } else {
        printf("No Profit No Loss");
    }
    return 0;
}
