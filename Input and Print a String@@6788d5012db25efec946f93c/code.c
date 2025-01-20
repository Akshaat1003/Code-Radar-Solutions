#include <stdio.h>

char* Intput() {
    char str;
    scanf("%s", str);
    return str;
}
int main() {
    printf("You entered: %s", Intput());
    return 0;
}