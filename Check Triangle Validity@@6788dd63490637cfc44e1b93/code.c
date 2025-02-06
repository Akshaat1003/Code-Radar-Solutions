#include <stdio.h>

int main() {
    int b,a,h;
    scanf("%d%d%d", &b,&a,&h);
    b = b*b;
    a = a*a;
    h = h*h;
    if(b+a==h){
        printf("Valid");
    } else {
        printf("Invalid");
    }
    return 0;
}