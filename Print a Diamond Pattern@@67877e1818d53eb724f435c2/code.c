#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i<=n; i++){
        for(int j=1; j<=n-1; j++){
            printf(' ');
        }
        for(int k=1; k<=(2*i-1); k++){
            printf("*");
        }
    }
    for(int i = n-1; i>=1; i--){
        // Bottom
        for(int j=1; j<=n-i; j++){
            printf(" ");
        }
        for(int k=1; k<=(2*i-1); k++){
            printf("*");
        }
    printf("\n");
    }
}