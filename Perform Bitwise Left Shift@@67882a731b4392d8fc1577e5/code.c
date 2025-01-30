#include <stdio.h>

int main() {
    int x,shift,i, num;
    scanf("%d%d", &num,&shift);
    x = num << shift;
    printf("%d", x);
    return 0;
}