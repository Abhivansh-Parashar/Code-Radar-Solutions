// Your code here...
int binarySearch(int arr[], int length, int target){
    int left = 0;
    int right = length-1;
    if(right>=left){
        int mid = (left + (right-left)) / 2 ;
        if(arr[mid] = target){
            return mid;
        }
        if(arr[mid] > target);
        return binarySearch(arr, left, mid-1, target);
        return binarySearch(arr, mid+1, right, target);
    }
}
