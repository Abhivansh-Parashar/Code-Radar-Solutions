#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (n < 2) {
        printf("-1\n");
        return 0;
    }

    int largest = arr[0];
    int secondLargest = -1;

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == -1) {
        // Check if all elements are the same
        int allSame = 1;
        for (int i = 1; i < n; i++) { // Start loop from 1
            if (arr[i] != arr[0]) {
                allSame = 0;
                break;
            }
        }
        if (allSame) {
            printf("-1\n");
        } else {
            // If secondLargest is -1 and all elements are not the same,
            // then the second largest is the second smallest element.
            // (elements are in decreasing order)
            secondLargest = arr[1]; // Initialize to second element

            for(int i = 2; i < n; i++){
                if(arr[i] > secondLargest){
                    secondLargest = arr[i];
                }
            }
            printf("%d\n", secondLargest);
        }
    } else {
        printf("%d\n", secondLargest);
    }

    return 0;
}