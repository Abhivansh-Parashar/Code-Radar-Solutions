// Your code here...`
int findOccurence(int arr[], int n, int target, int mode){
    if(mode = 'F'){
        for(int i = 0; i <n; i++){
            if(arr[i] = target){
                return i;
            }
        }
        return -1;
    }
    else if(mode = 'L'){
        for(int i = n-1; i >= 0; i--){
            if(arr[i] = target){
                return i;
            }
        }
    }
}