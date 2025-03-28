// Your code here...// Your code here...
# include <string.h>
int selectionSort(char arr[][100], int n){
    for(int i=0; i< n; i++){
        int min_idx = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        if (min_idx != i) {
            char temp[100]; // Temporary string for swapping
            strcpy(temp, arr[i]);
            strcpy(arr[i], arr[min_idx]);
            strcpy(arr[min_idx], temp);
        }
    }
}
int printArray(char arr[][100], int n){
    for(int i=0; i< n; i++){
        printf("%s ", arr[i]);
    }
}