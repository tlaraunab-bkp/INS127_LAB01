void swap(int* x, int* y){
    int pivot;
    if(*x > *y){
        pivot = *y;
        *y = *x;
        *x = pivot;
    }
}

void sort4Network(int *arr){
    swap(arr, arr+2);
    swap(arr+1, arr+3);
    swap(arr, arr+1);
    swap(arr+2,arr+3);
    swap(arr+1,arr+2);
}