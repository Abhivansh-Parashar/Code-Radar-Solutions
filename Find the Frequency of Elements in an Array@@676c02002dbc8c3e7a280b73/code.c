#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        int freq = 1;
        int isDuplicate = 0;

        // Check if the current element is a duplicate of a previous element
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }

        if (isDuplicate) {
            continue; // Skip duplicates
        }

        // Count frequency of the current element
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                freq++;
            }
        }

        printf("%d %d\n", arr[i], freq);
    }

    return 0;
}