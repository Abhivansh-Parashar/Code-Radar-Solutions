#include <stdio.h>

int main() {
    int rows;
    scanf("%d", &rows);
    for(int i=1; i<rows-1; i++){
        for(int j=0; j<rows-i; j++){
            printf("%d", j);
        }
    printf("\n");
    }
    return 0;
}