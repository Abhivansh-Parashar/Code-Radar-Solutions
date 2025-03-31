#include <stdio.h>

int main() {
    int n, k;

    // Input the size of the array
    scanf("%d", &n);

    int arr[n];

    // Input the elements of the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Use & to read into the array
    }

    // Input the number of positions to rotate
    scanf("%d", &k);

    k = k % n; // Adjust rotation for cases where k >= n

    // Temporary array to store the rotated elements
    int temp[n];

    // Fill the temporary array with rotated elements
    for (int i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }

    // Print the rotated array
    for (int i = 0; i < n; i++) {
        printf("%d \n", temp[i]);
    }

    return 0;
}
