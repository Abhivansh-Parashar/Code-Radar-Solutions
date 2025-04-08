#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find the maximum positive number in the array
    int max_positive = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max_positive) {
            max_positive = arr[i];
        }
    }

    // If there are no positive numbers, the smallest missing is 1
    if (max_positive <= 0) {
        printf("1\n");
        return 0;
    }

    // Create a boolean array (implemented with integers) to mark presence
    int present[max_positive + 1];
    for (int i = 0; i <= max_positive; i++) {
        present[i] = 0; // 0 represents false
    }

    // Mark the positive integers present in the input array
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0 && arr[i] <= max_positive) {
            present[arr[i]] = 1; // 1 represents true
        }
    }

    // Find the smallest missing positive integer
    for (int i = 1; i <= max_positive + 1; i++) {
        if (i > max_positive || present[i] == 0) {
            printf("%d\n", i);
            return 0;
        }
    }

    return 0;
}