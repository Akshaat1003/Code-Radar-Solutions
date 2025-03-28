int isPrime(num){
    int count=0;
    for(int i=1; i<=num; i++){
        (num%i==0)?count++:count=count;
        if(count==2) printf("1");
        else printf("0");
    }
}