#include <stdio.h>
#include <string.h>
int main() {
    char bin[100], comp[100];
    int i;
    scanf("%s", bin);
    for(i=0; i<strlen(bin); i++) {
        if(bin[i]=='0')
            comp[i]='1';
        else
            comp[i]='0';
    }
    comp[i]='\0';
    printf("%s", comp);
    return 0;
}
