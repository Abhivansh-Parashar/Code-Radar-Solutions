#include <stdio.h>

int main() {
    int rows;
    scanf("%d", &rows);
    for(int i=1; i<=rows; i++){
        for(int j=0; j<=i; j++){
            printf(" ");
        }
        for(int k=0; k<rows; k++){
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}