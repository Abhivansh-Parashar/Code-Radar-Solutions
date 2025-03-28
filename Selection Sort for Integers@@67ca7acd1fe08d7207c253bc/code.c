// Your code here...
int selectionsort(int arr[], int n){
    int min_idx = i;
    for(int j = i+1; j < n; j++){
        if(arr[j] > arr[i]){
            min_idx = j;
        }
    }
    if(min_idx != i){
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}
int printArray(int arr[], int n){
    for(int i=0; i< n; i++){
        printf("%d", arr[i]);
    }
}