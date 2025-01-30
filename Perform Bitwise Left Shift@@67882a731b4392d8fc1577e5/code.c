#include <stdio.h>

int main() {
    int x,shift,i, num;
    scanf("%d%d", &num,&shift);
    for(i=0; i<=shift; ++i){
        printf("%d\n", num << i);
        num = num << i;
    }
    printf("%d", num);
    return 0;
}