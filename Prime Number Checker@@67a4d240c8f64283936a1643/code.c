int isPrime(int num){
    int count=0;
    for(int i=1; i<=num; i++){
        if(num%i==0) count++;
        if(count==2) printf("%d\n",1);
        else printf("%d\n",0);
    }
}