#include <stdio.h>

int main() {
    int x, count = 0;
    scanf("%d", &x);
    while ((x & 1) == 0) {
        count++;
        x >>= 1;
    }
    printf("%d", count);
    return 0;
}
