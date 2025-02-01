#include <stdio.h>

int main() {
    int rows;
    scanf("%d", &rows);
    for(int i=rows; i>=1; i--){
        for(int j=i; j>=0; j--){
            printf("%c", 'A');
            'A'++;
        }
        printf("\n");
    }
    return 0;
}