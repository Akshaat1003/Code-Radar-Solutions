#include <stdio.h>

int main() {
    int x,shift,i, num;
    scanf("%d%d", &x,&shift);
    for(i=0, i<shift, ++i){
        num = x << i;
    }
    printf("%d", x);
    return 0;
}