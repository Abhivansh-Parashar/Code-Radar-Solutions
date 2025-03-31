// Your code here...

int printPrimesinRange(int a, int b){

    for(int i=a; i<=b; i++){
        if(i==0 || i==1){
            return 1;
        }
        else{
        for(int j=2; j<b; j++){
            if(j%i == 0){
                return 0;
                break;
            }
            else{
                return 1;
            }
        }
        }
        if(1){
            printf("%d\n", j);
        }
    }
}