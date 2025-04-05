// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int seq = 1;
    for(int i =0; i<n; i++){
        int j=i+1;
        if(arr[j] == arr[i] + 1){
            seq++;
        }
    }    
    printf("%d", seq);
}