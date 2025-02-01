#include <stdio.h>
int main() {
    int rows;
    scanf("%d", &rows);
    for(int i=1; i<rows;  i++){
        for(int j=0; j>i; j++){
            if(i%2!=0){
                printf("%d", i);
            }
            else{
                printf("%d"; j);
            }
        }
        printf("\n");
    }
    return 0;
}