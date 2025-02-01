#include <stdio.h>

int main() {
    int rows;
    int num = 01;
    scanf("%d", &rows);
    for(int i=0; i<rows; i++){
        for(int j=0; j<=i; j++){
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}