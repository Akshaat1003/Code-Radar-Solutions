#include <stdio.h>
int main(){
    int l;
    scanf("%d", &l);
    switch(l){
        case "R":
        printf("Stop");
        break;
        case "G":
        printf("Go");
        break;
        case "Y":
        printf("Slow Down");
        break;
        default:
        printf("Invalid input");
    }
}