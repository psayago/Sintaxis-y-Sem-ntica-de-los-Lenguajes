#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* Qu�: Pablo Sayago
 * Descripci�n: Demostrar con, un programa simple, que se est� en capacidad de editar,
   compilar, y ejecutar un programa C.
 * Qui�nes: Pablo Sayago
 * Cuando: 13/04/2020
 */

void main(){
    char cadena[10];
    strcpy(cadena,"Hola mundo");
    printf("%s",&cadena);
    guadarCadena(cadena);
}



void guadarCadena(char *texto){
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
