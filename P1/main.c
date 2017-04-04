# include <stdio.h>

int main () {
    int a , b ;
    int c ;
    char cadena [8];
    
     //Faltaba un punto y coma
    
    printf("Asigne un valor a la cadena de caracteres");
    // Al escribir "Hola" la cadena se guarda correctamente en el arreglo cadena
    // Al escribir "Buenos días" solo se almacena en cadena "Buenos"
    // debido a que la máscara del scanf no contempla un espacio
    scanf("%s" , cadena );
    
    printf("La cadena es %s \n " , cadena );
    printf("El valor asignado a las variables es :\n ");
    printf("\ta : %d", a );
    printf("\tb : %d", b );
    printf("\tc : %d\n", c );
    
    return 0;
}