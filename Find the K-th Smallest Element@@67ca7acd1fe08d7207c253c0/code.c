// Your code here...

int kthSmallest(int arr[], int n, int k){
    if (k > n || k <= 0) { // Check for invalid k
        return -1; 
    }
    for(int i=0; i<n; i++){
        int min_idx = i;
        for(int j = i+1; j<n; j++){
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
    return arr[k-1];
}
