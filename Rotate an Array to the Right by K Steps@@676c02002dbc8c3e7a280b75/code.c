#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    scanf("%d", &k);

    k = k % n;
    if (k < 0) { // Handle negative k
        k = k + n;
    }

    int temp[n];

    for (int i = 0; i < n; i++) {
        temp[(k + i) % n] = arr[i];
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }

    return 0;
}