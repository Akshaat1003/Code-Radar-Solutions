int isPrime(num){
    int count=0;
    for(int i=1; i<=num; i++){
        (num)?count++:count=count;
        if(count==2) return 1;
        else return 0;
    }
}