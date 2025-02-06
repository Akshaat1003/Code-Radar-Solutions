#include <stdio.h>

int main() {
    int b,a,h;
    scanf("%d%d%d", &b,&a,&h);
    if(b**2 + a**2 == h**2){
        printf("Valid");
    } else {
        printf("Invalid")
    }
    return 0;
}