#include <stdio.h>

int main() {
    int rows;
    int num = 01;
    scanf("%d", &rows);
    for(int i=0; i<rows; i++){
        for(int j=i; j<=i; j++){
            printf("%d", num);
        }
        printf("\n");
    }
    return 0;
}