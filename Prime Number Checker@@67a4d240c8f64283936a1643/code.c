// Your code here...
#include <stdio.h>

int isprime(int a);

int isprime(int a){
    if(a==0 || a==1){
        return 0;
    }
        for(int i=2; i*i<a; i++){
            if(a%i ==0){
                return 0;
            }
            return 0;
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