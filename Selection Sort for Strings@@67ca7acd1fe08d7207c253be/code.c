void selectionSortStrings(char arr[][100], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (strcmp(arr[j], arr[min_index]) < 0) {
                min_index = j;
            }
        }
        if (min_index != i) {
            char temp[100];
            strcpy(temp, arr[i]);
            strcpy(arr[i], arr[min_index]);
            strcpy(arr[min_index], temp);
        }
    }
}

// Function to print an array of strings
void printStringArray(char arr[][100], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }
}