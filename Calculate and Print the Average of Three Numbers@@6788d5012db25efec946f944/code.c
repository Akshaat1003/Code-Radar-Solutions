#include <stdio.h>

int main() {
    int x,y,z, avg;
    scanf("%f %f %f", &x,&y,&z);
    avg = (x+y+z)/3;
    printf("Average: %d", avg);
    return 0;
}