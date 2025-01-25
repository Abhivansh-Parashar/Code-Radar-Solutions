#include <stdio.h>

int main() {
    int rows;
    scanf("%d", &rows);
    for(int i=0; i<rows; i++){
        for(int j=0; j<rows-i-1; j++){
            printf(" ");
        }
        for(int k=0; k<=i; k++){
            printf("*");
        }
        for(int l=0; l<i;l++){
            printf("*");
        }
    printf("\n");
    for(int i=rows-2; i>=0; i--){
        for(int j=0; j<rows-i-1; j++){
            printf(" ");
        }
        for(int k=0; k<=i; k++){
            printf("*");
        }
        for(int l=0; l<i; l++){
            printf("*");
        }
        printf("\n");
    }

    }
    return 0;
}