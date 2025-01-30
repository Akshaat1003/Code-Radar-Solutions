#include <stdio.h>

int main(){
    int x;
    unsigned int LowestSet = x & -x;
    printf("%u", LowestSet);
    return 0;
}