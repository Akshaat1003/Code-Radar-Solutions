int isPrime(int num){
    int count=0;
    for(int i=1; i<=num; i++){
        int True = 1;
        int False = 0;
        if(num%i==0) count++;
        if(count==2){return(True);}
        else{return(False);}
    }
}