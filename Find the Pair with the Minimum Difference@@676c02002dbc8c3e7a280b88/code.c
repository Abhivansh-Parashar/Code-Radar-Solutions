// Your code here...
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[n]);
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

    int min_diff = -1; // Initialize with an invalid difference
    int num1 = -1, num2 = -1;

    for (int i = 0; i < n - 1; i++) {
        int diff;
        if (arr[i + 1] > arr[i]) {
            diff = arr[i + 1] - arr[i];
        } else {
            diff = arr[i] - arr[i + 1];
        }

        if (min_diff == -1 || diff < min_diff) {
            min_diff = diff;
            num1 = arr[i];
            num2 = arr[i + 1];
        }
    }

    printf("%d %d\n", num1, num2);
}