// Your code here...
#include <stdio. h>

int fibonacci(int x){
    int a = 0;
    int b = 1;
    int c = a+b;
    while(x>0){
        printf("%d ", a);
        printf("%d ", b);
        printf("%d ", c);
        a == b;
        b == c;
        c == a+b;
        printf("%d", c);
        x--;
    }
}

int main(){
    int n;
    scanf("%d", &n);
    if(n<=0){
        printf("Invalid input");
        return 0;
    }
    fibonacci(n);
    return 0;
}