#include <stdio.h>

int main() {
    int rows;
    scanf("%d", &rows);
    for(int i=1; i<rows-1;i++){
        for(int j=0; j<i; j++){
            printf(" ");
        }
    for(int k=1; k<=i; k++){
        printf("%d", k);
    }
    for(int l=1; l<=i-1; l++){
        printf("%d", l);
    }
    printf("\n");
    }
    return 0;
}