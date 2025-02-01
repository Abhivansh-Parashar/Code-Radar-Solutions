#include <stdio.h>

int main() {
    int rows;
    scanf("%d", &a);
    for(int i=0; i<rows; i++){
        for(int j=0; j<=i; j++){
            printf("%c", 'A' + j);
        }
        printf("\n");
    }
    return 0;
}