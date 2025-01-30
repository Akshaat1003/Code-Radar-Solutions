#include <stdio.h>

int main(){
    int x;
    int LowestSet = x & -x;
    printf("%d", LowestSet);
    return 0;
}