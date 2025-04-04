#include <stdio.h>

int main() {
    int num, started = 0;
    scanf("%d", &num);

    for (int i = 31; i >= 0; i--) {
        int bit = (num >> i) & 1;
        if (bit == 1) {
            started = 1;
        }
        if (started) {
            printf("%d", bit);
        }
    }
    if (!started) {
        printf("0");
    }
    printf("\n");
    return 0;
}
