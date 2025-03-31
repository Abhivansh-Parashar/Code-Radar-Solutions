// Your code here...
#include <string.h>

int insertionSort(char arr[][100], int n){
    for(int i=1; i<n; i++){
        char key;
        strcmp(key, arr[i]);
        int j = i-1;
        while(j>=0 && (strcmp(arr[j], key) > 0)){
            arr[j+1] = arr[j];
            j = j-1;
        }
        key = arr[j+1];
    }
}

int printArray(char arr[][100], int n){
    for(int i=0; i<n; i++){
        printf("%s\n", arr[i]);
    }
}