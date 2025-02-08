#include <stdio.h>

int main() {
    int n1, n2;
    char o;
    scanf("%d%d%c", &n1,&n2,&o);
    switch(o){
        case '+':
            int sum = n1+n2;
            printf("%d", sum);
            break;
        case '-':
            int sub = n1-n2;
            printf("%d", sub);
            break;
        case '*':
            int mul = n1*n2;
            printf("%d", mul);
            break;
        case '/':
            int div = n1/n2;
            printf("%d", div);
            break;
        default:
            printf("Error")
    }
    return 0;
}