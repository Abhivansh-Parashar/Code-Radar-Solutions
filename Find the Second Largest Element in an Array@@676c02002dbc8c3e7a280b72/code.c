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
    int secondLargest = -1; // Initialize to -1

    // Check if all elements are the same
    int allSame = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[0]) {
            allSame = 0;
            break;
        }
    }

    if (allSame) {
        printf("-1\n");
        return 0;
    }

    // Find the second largest element
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    printf("%d\n", secondLargest);

    return 0;
}