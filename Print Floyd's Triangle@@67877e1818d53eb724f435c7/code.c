#include <stdio.h>

int main() {
    int rows;
    int num = 0;
    int n1 = 1;
    scanf("%d", &rows);
    for(int i=0; i<rows; i++){
        for(int j=i; j=rows; j++){
            printf("%d", num + n1);
        }
        printf("\n");
    }
    return 0;
}