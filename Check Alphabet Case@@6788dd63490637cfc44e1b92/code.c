#include <stdio.h>

int main() {
    int c;
    scanf("%c", &c);
    if(c>=65 && c<=92){
        printf("Uppercase");
    } else if(c>=97 && c<=122) {
        printf("Lowercase");
    } else {
        printf("Not an alphabet");
    }
    return 0;
}