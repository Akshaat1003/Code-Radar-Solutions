#include <stdio.h>

int main() {
    int x,shift,i, num;
    scanf("%d%d", &num,&shift);
    for(i=1; i<=shift; ++i){
        printf("%d ", num << i);
        num = num << i;
    }
    printf("%d", num);
    return 0;
}