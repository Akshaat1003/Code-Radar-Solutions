#include <stdio.h>
int main(){
    int l;
    scanf("%c", &l);
    switch(l){
        case 'R':
        printf("Stop");
        break;
        case 'G':
        printf("Go");
        break;
        case 'Y':
        printf("Slow Down");
        break;
        default:
        printf("Invalid input");
    }
}