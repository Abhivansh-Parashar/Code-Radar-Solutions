// Your code here...

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int num;
    scanf("%d", &num);
    for(int i=0; i<n; i++){
        if(arr[i] = num){
            printf("%d", &i);
            break;
        }
    }
}