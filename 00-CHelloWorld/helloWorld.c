#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* Pablo Sayago
 * Descripción: Demostrar con un programa simple que se está en capacidad de editar,
   compilar y ejecutar un programa C.
 * Pablo Sayago
 * 13/04/2020
 */

void main(){
    char cadena[10];
    strcpy(cadena,"Hola mundo");
    printf("%s",&cadena);
    guardarCadena(cadena);
}



void guardarCadena(char *texto){
    FILE *fpuntero;
    char rutaArchivo[] = "output.txt";
    fpuntero= fopen(rutaArchivo,"w");
    if(fpuntero==NULL){
        printf("ERROR: Al intentar generar el archivo.\n");
        return;
    }
    fprintf(fpuntero,"%s",texto);
    fclose(fpuntero);
    printf("\n**************************************\n");
    printf("Se genero el txt correctamente");
}
