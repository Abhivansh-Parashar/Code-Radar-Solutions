// Your code here...
int binarySearch(int arr[], int length, int target){
    int left = 0;
    int right = length-1;
    if(left <= right){
        int mid = left + (right-left) / 2 ;        
        if (arr[mid] == target) {
            return mid;
        }

        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}
