#include <stdio.h>

int main(){
    int x;
    int p = 0;
    scanf("%d", x);
    while(x && !(num & 1)){
        num >>= 1;
        p++;
    }
    printf("%d", p);
    return 0;
}