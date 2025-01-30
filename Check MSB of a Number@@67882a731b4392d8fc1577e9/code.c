#include <stdio.h>

int main() {
    unsigned int x;
    unsigned msb = 0;
    scanf("%u", &x)
    while(x >>= 1){
        msb++;
    }
    if(msb==1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}