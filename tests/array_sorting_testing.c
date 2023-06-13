//compara os valores do array
int compareInt(void *arr,  int a,  int b) {
    return ((int *)arr)[a] - ((int *)arr)[b];
}

//troca os valores do array
void swapInt(void *arr, int a, int b){
    int temp = ((int *)arr)[a];
    ((int *)arr)[a] = ((int *)arr)[b];
    ((int *)arr)[b] = temp;
}

//main pra teste interno
int main(int argc, char const *argv[])
{
    int i;
    int arr[8] = {4,2,1,3,8,6,9,7};
    dsQuickSort(arr,8,compareInt,swapInt);

    for(i = 0; i < 8; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}