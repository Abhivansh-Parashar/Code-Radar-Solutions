// Your code here...
// Your code here...
int selectionSort(char arr[], int n){
    for(int i=0; i< n; i++){
        int min_idx = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        if(min_idx != i){
            int temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
    }
}
int printArray(char arr[], int n){
    for(int i=0; i< n; i++){
        printf("%c ", arr[i]);
    }
}