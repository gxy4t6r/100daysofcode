#include <stdio.h>

int main() {
    int num, temp, rem, fact, i, sum = 0;
    scanf("%d", &num);
    temp = num;
    while(temp > 0) {
        rem = temp % 10;
        fact = 1;
        for(i = 1; i <= rem; i++)
            fact *= i;
        sum += fact;
        temp /= 10;
    }
    if(sum == num)
        printf("Strong Number");
    else
        printf("Not Strong Number");
    return 0;
}
