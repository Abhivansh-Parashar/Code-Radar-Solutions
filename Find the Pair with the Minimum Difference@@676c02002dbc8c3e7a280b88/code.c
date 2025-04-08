// Your code here...
#include <stido.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", arr[n]);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    int temp[n];
    if(n>1){
        for(int i = 0; i<n; i++){
            for(int j=1; j<n; j++){
                arr[i] - arr[j] > arr[i+1] - arr[j+1];
                temp[i] = arr[i];
                temp[i+1] = arr[j];
            }
        }
    }
    for(int i=0; i<n; i++){
        printf("%d %d", temp[i]);
    }
}