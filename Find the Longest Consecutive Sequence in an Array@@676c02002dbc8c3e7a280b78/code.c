#include <stdio.h>
#include <stdlib.h> // For qsort

// Comparison function for qsort
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array
    qsort(arr, n, sizeof(int), compare);

    if (n == 0) {
        printf("0\n");
        return 0;
    }

    int longest_seq = 1;
    int current_seq = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1] + 1) {
            current_seq++;
        } else if (arr[i] != arr[i - 1]) { // Skip duplicates
            if (current_seq > longest_seq) {
                longest_seq = current_seq;
            }
            current_seq = 1;
        }
    }

    // Check if the last sequence is the longest
    if (current_seq > longest_seq) {
        longest_seq = current_seq;
    }

    printf("%d\n", longest_seq);

    return 0;
}