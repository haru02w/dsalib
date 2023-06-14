#include <stdio.h>
#include "./array_sorting.h"

//recursion -> moves smaller number to left and bigger ones to the right
static void quick(void *arr, const int left, const int right, size_t memnumb, int (*compare)(void*, void*)){
    if(left >= right) return;

    int pivot = left;
    int swapper, i = left+1;

    //start swapping the values
    for(swapper = left+1; i <= right; i++){
        if(compare(arr+(i*memnumb), arr+(pivot*memnumb)) < 0){ //changing the < to > changes the order of sorting
            swap(arr, memnumb, i, swapper);
            swap(arr, memnumb, pivot, swapper);
            pivot++;
            swapper++;
        }
    }

    //do it again
    quick(arr, left, pivot-1, memnumb, compare);
    quick(arr, pivot+1, right, memnumb, compare);
}

//main process
void dsQuickSort(void *arr, size_t size, size_t memnumb, int (*compare)(void*, void*)){
    int left = 0, right = size-1;
    quick(arr,left,right, memnumb, compare);
}