// Your code here...
int findUnsortedSubarray(int arr[], int n){
    int start = -1, end = -1;
    int i, j;
    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            start = i;
            break;
        }
    }
    if(start == -1){
        return 0;
    }
    for(int i = n-1; i>0; i++){
        if (arr[i] < arr[i+1]){
            end = i;
            break;
        }
    }
    if(end == -1){
        return 0;
    }
    int min_val = arr[start];
    int max_val = arr[start];
    for(int i = start+1; i<=end; i++){
        if(arr[i] < min_val){
            min_val = arr[i];
        }
        else if(arr[i] > min_val){
            max_val = arr[i];
        }
    }
    for(int i = 0; i<start; i++){
        if(arr[i] > max_val){
            start = i;
            break;
        }
    }
    for(int j = end-1; j> start; j++){
        if(arr[i] < max_val){
            end = j;
            break;
        }
    }
    return end - start + 1;
}