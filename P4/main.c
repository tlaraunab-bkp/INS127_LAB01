#include <stdio.h>
#include "util.h"

int main(int argc, char **argv)
{
	int* arr;
    int i;
    arr = (int *) malloc(4*sizeof(int));
    
    printf("Indique 4 números separados por un espacio que serán ordenados -> ");
    scanf("%d %d %d %d", arr, arr+1, arr+2, arr+3);
    
    sort4Network(arr);
    
    printf("Elementos ordenados -> %d %d %d %d", *arr, *(arr+1), *(arr+2), *(arr+3));
    
}
