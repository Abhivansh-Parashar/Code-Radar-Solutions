#include <stdio.h>

int main() {
    int rows;
    scanf("%d", &rows);
    for (int i=0; i<=rows; i++){
        for(int j=rows; j>i; j--){
            printf(" ");
        }
        for(int k=1; k<=i; k++){
            printf("%d ", k);
        }
        printf("\n");
    }
    return 0;
}