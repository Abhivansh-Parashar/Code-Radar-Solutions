#include <stdio.h>

int main() {
    int rows;
    scanf("%d", &rows);
    for(int i=0; i<rows; i++){
        if(i==0 || i== rows-1){
            for(int j=0; j<rows;j++){
                printf("*");
            }
        }
        else{
            for(int k=0; k!=rows; k++){
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}