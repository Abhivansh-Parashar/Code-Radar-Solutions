// Your code here...

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
    int freq = 0;
        for(int j=i+1; j<n; j++){
            if(arr[i] = arr[j]){
                freq += 1;
            }
        }
        printf("%d %d\n", arr[i], freq);
    }
}