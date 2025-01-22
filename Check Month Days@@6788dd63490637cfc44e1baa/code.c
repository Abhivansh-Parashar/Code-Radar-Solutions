#include <stdio.h>

int main() {
    int month;
    scanf("%d", &month);
    if(month%2!=0){
        printf("31");
    }
    else if(month==6){
        printf("31");
    }
    else if(month ==2){
        printf("28");
    }
    else if(month%2==0 && month!=2 && month !=6){
        printf("30");
    }
    else{
        printf("Invalid month");
    }
    return 0;
}