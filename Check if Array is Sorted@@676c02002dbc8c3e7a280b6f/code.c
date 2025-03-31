#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Corrected loop and logic
    for (int j = 0; j < n - 1; j++) {
        if (arr[j] > arr[j + 1]) {
            printf("Not Sorted\n"); // Print and exit if not sorted
            return 0;
        }
    }

    printf("Sorted\n"); // Print if the loop completes (sorted)
    return 0;
}