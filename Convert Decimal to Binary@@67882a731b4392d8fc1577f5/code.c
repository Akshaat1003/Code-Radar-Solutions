#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    for (int i = 31; i >= 0; i--) {
        int bit = (num >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
    return 0;
}
