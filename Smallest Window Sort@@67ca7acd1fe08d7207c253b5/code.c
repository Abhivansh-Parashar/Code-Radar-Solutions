// Your code here...
int findUnsortedSubarray(int arr[], int n){
    int start = -1, end = -1;
    int i, j;
    for(int i=0; i<n-1; i++){
        if(arr[i] >= arr[i+1]){
            start = i;
            break;
        }
    }
    if(start = -1){
        return 0;
    }
    for(int j = 0; j<n-1; j++){
        if (arr[i] < arr[i+1]){
            end = j;
            break;
        }
    }
    if(end = -1){
        return 0;
    }
    int min_val = arr[start];
     int max_val = arr[start];
    for(int i = start+1; i<n-1; i++){
        if(arr[i] < min_val){
            min_val = arr[i];
        }
        else if(arr[i] > max_val){
            max_val = arr[i];
        }
    }
    for(int i = 0; i<start; i++){
        if(arr[i] > start){
            start = i;
            break;
        }
    }
    for(int i = end-1; i> start; i++){
        if(arr[i] < end){
            end = arr[i];
            break;
        }
    }
    return end-start+1;
}