#include <stdio.h>

int main() {
    int rows;
    int num = 0;
    scanf("%d", &rows);
    for(int i=0; i<rows; i++){
        for(int j=i+1; j<=rows; j++){
            printf("%d", num + j);
        }
        printf("\n");
    }
    return 0;
}