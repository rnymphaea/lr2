#include "diff.h"

int diff(int arr[], int arr_size){
        int result = max(arr, arr_size) - min(arr, arr_size);
        return result;
}

