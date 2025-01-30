#include <stdio.h>

int main() {
    unsigned int x;
    unsigned msb;
    while(x>>=1){
        msb++;
    }
    if(msb==1){
        printf("%d" msb);
    }
    else{
        printf("%d",msb);
    }
    return 0;
}