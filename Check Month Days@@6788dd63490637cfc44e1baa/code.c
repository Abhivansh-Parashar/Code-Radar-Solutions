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
    else{
        printf("30");
    }
    return 0;
}