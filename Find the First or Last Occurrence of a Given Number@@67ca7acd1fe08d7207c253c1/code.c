
int findOccurrence(int arr[], int n, int target, char mode) {
    if (mode == 'F') { // Find first occurrence
        for (int i = 0; i < n; i++) {
            if (arr[i] == target) {
                return i; // Correct: return the index immediately
            }
        }
    } else if (mode == 'L') { // Find last occurrence
        for (int i = n - 1; i >= 0; i--) {
            if (arr[i] == target) {
                return i; // Correct: return the index immediately
            }
        }
    }
    return -1; // Target not found
}