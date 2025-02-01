#include <stdio.h>

int main() {
    int rows;
    int l=1;
    char a='A';
    scanf("%d", &rows);
    for(int i=rows; i>=0; i--){
        for(int j=i; j>=0; j--){
            printf("%c ", a + l);
        }
        printf("\n");
    }
    return 0;
}