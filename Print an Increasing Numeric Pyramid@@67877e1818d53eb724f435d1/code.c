#include <stdio.h>

int main() {
    int rows;
    scanf("%d", &rows);
    for(int i=1; i<=rows; i++){
        for(int j=i; j<rows; j++){
            printf(" ");
        }
        for(int k=0; k<rows; k++){
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}