#include <stdio.h>
int main() {
    int x;
    scanf("%d", &x);
    if(x==0){
        printf("Zero");
    }
    else{
        (x>0) ? printf("Positive"):printf("Negative");
    }
}