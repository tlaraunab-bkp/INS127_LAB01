#include <stdio.h>
#include "util.h"

int main(int argc, char **argv)
{
	int dia, mes, anho, numeroMagico;
    
    printf("Indique su fecha de nacimiento en el formato dia/mes/año -> ");
    scanf("%2d/%2d/%4d", &dia, &mes, &anho);
    
    if(!isValidDate(dia, mes, anho)){
        printf("La fecha ingresada no es válida.\n");
        printf("Por favor, verifique los datos y vuelva a intentarlo\n");
        return -1;
    }
    
    numeroMagico = getMagikNumber(dia, mes, anho);
    
    printf("El número mágico según su fecha de nacimiento es: -> %d <-\n", numeroMagico);
    
    return 0;
    
}
