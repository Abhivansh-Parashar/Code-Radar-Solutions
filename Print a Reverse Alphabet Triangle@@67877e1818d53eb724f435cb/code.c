#include <stdio.h>

int main() {
    int rows;
    char a='A';
    scanf("%d", &rows);
    for(int i=rows; i>1; i--){
        for(int j=i; j>=0; j--){
            printf("%c ", a);
            a++;
        }
        printf("\n");
    }
    return 0;
}