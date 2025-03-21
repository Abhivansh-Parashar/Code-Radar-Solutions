// Your code here...
#include <stdio.h>

void isprime(int a);

void isprime(int a){
    if(a==0 || a==1){
        printf("1");
    }
    else if(a>=2){
        for(int i=0; i<a; i++){
            if(a%i !=0){
                printf("1");
            }
            else{
                break;
                printf("0");
            }
        }  
    }
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int num;
        scanf("%d", &num);
        printf("%d\n", isprime(num));
    }
    return 0;
}