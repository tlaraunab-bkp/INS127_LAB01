#include <stdio.h>
#include "util.h"

void eliminaPrimos(int**, int, int);

int main(int argc, char **argv)
{
	int **A;
    int filas, columnas;
    
    printf("Indique el nmero de filas para la matriz A: ");
    leerint(&filas);
    
    printf("Indique el nmero de columnas para la matriz A: ");
    leerint(&columnas);
    
    if(filas <= 0 || columnas <= 0){
        printf("Debe indicar número de filas y columnas mayor a cero.\n");
        return -1;
    }
    
    matrix_intAlloc(&A, filas, columnas);
    matrix_randomFill(A, filas, columnas);
    matrix_intPrint(A, filas, columnas);
    printf("\n------------------\n");
    eliminaPrimos(A, filas, columnas);
    matrix_intPrint(A, filas, columnas);
    
}

void eliminaPrimos(int** m, int filas, int columnas){
    int i, j;
    for(i = 0; i < filas; i++){
        for(j = 0; j < columnas; j++){
            if(!esPrimo(m[i][j])){
                m[i][j] = 0;
            }
        }
    }
}