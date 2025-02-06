#include <stdio.h>

int main() {
    int c;
    scanf("%c", &c);
    if(c>=65 && c<=92){
        printf("Uppercase");
    } else {
        printf("Lowercase");
    }
    return 0;
}