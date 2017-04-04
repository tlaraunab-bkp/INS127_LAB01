#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void leerint(int* dest){
    scanf("%d",dest);
}

void matrix_intAlloc(int*** m, int filas, int columnas){
    int i;
    *m = (int**) malloc(filas*sizeof(int*));
    for(i = 0; i < filas; i++){
        (*m)[i] = (int*) malloc(columnas*sizeof(int));
    }
}

void matrix_randomFill(int** m, int filas, int columnas){
    int i, j;
    srand(time(0));
    for(i = 0; i < filas; i++){
        for(j = 0; j < columnas; j++){
            m[i][j] = rand()%100;
        }
    }
}

void matrix_intPrint(int** m, int filas, int columnas){
    int i, j;
    for(i = 0; i < filas; i++){
        for(j = 0; j < columnas; j++){
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }
}

int esPrimo(int numero){
    int i, c = 0;
    for(i = 1; i <= numero/2; i++){
        if(numero % i == 0){
            c++;
        }
    }
    return c == 2 || numero == 2;
}