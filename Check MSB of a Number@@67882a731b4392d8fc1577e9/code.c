#include <stdio.h>

int main() {
    unsigned int x;
    scanf("%u", &x);
    if(x & (1 << 31)){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}