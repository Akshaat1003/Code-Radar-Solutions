#include <stdio.h>
int fibonacciSeries(int n){
    int a=0,b=1;
    if(n==1) printf("%d", a);
    else if(n==2) printf("%d %d", a,b);
    else {
        printf("%d %d ", a,b);
        for(int i=3; i<=n; i++){
        int c = a+b;
        printf("%d ", c);
        a = b;
        b = c;

    }
    }
}