#include <stdio.h>
int main(){
    int a,b,h;
    scanf("%d%d%d", &a,&b,&h);
    if(a==b==h) printf("Equilateral");
    else if(a==b || a==h || b==h) printf("Isosceles");
    else printf("Scalene")
}