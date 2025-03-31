// Your code here...
#include <stdio.h>
int main(){
    int n, a, k;
    for(int i=0; i<n; i++){
        scanf("%d", &a);
    }
    scanf("%d", &k);
    k = k % n;

    // Temporary array to store the rotated elements
    int temp[n];

    // Fill the temporary array with rotated elements
    for (int i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }

    // Copy rotated elements back into the original array
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
    for(int i =0; i<n; i++){
        printf("%d", arr[i]);
    }
}