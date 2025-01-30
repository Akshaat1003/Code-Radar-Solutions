#include <stdio.h>

int main() {
    int x,shift,i;
    scanf("%d%d", &x,&shift);
    for(i=0, i<shift, ++i){
        x = x >> i;
    }
    printf("%d", x);
    return 0;
}