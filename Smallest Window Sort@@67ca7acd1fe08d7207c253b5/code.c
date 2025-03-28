int findUnsortedSubarray(int arr[], int n) {
    int start = -1, end = -1;
    int i = 0, j;

    // Find the first element that is out of order from the left
    while (i < n - 1) {
        if (arr[i] > arr[i + 1]) {
            start = i;
            break;
        }
        i++;
    }

    if (start == -1) {
        return 0;
    }

    // Find the first element that is out of order from the right
    j = n - 1;
    while (j > 0) {
        if (arr[j] < arr[j - 1]) {
            end = j;
            break;
        }
        j--;
    }

    // Find the minimum and maximum values in the unsorted subarray
    int min_val = arr[start];
    int max_val = arr[start];
    i = start + 1;
    while (i <= end) {
        if (arr[i] < min_val) {
            min_val = arr[i];
        }
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
        i++;
    }

    // Adjust the start and end indices
    i = 0;
    while (i < start) {
        if (arr[i] > min_val) {
            start = i;
            break;
        }
        i++;
    }

    j = n - 1;
    while (j > end) {
        if (arr[j] < max_val) {
            end = j;
            break;
        }
        j--;
    }

    return end - start + 1;
}