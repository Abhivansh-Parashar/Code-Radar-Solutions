#include <stdio.h>


int main() {
    int rows;
    scanf("%d", &rows);
    for(int i=0; i<rows; i++){
        for(char a='A'; a<i; a++){
            printf("%c", a);
        }
        printf("\n");
    }
    return 0;
}