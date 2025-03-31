int findKthMissing(int arr[], int n, int k) {
    int missingCount = 0;
    int expected = 1;
    int arrIndex = 0;

    while (missingCount < k) {
        if (arrIndex < n && arr[arrIndex] == expected) {
            expected++;
            arrIndex++;
        } else {
            missingCount++;
            if (missingCount == k) {
                return expected;
            }
            expected++;
        }
    }
    return expected - 1; //Shouldn't reach here, but for safety.
}