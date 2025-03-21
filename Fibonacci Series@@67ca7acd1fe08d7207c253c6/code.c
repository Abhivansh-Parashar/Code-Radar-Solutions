#include <stdio.h>

int fibonacciSeries(int x){
    int a = 0;
    int b = 1;
    int c = a+b;
    for(int i=0; i<x; i++){
        if(i==0){
        printf("0 ");
        }
        else if(i==1){
        printf("1 ");
        }
        else{
            c = a+b;
            printf("%d ", c);
            a=b;
            b=c;
        }
    }
}
int main(){
    int n;
    scanf("%d", &n);
    if(n<=0){
        printf("Invalid input");
        return 0;
    }
    fibonacciSeries(n);
    return 0;
}