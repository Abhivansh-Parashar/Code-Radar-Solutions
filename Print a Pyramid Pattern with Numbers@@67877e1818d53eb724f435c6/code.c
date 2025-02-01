#include <stdio.h>

int main() {
    int rows;
    scanf("%d", &rows);
    for (int i=0; i<rows; i++){
        for(int j=rows-1; j>=0; j--){
            printf(" ");
        }
        for(int k=0; k<rows; k++){
            printf("%d ", i+1);
        }
        printf("\n");
    }
    return 0;
}