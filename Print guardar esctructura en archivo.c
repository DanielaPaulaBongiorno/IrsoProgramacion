/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
struct {
    char nombre[20];
    int matricula;
}alumno;

int main()
{
    printf("Ingrese nombre: ");
    gets(alumno.nombre);
    printf("Ingrese matricula: ");
    scanf("%d", &alumno.matricula);
    
    FILE * archivo;
    archivo=fopen("alumnos.txt", "a");
    
    if (archivo == NULL){
        printf("El archivo no existe!");
        exit(1);
    }
    fwrite(&alumno, sizeof(alumno), 1, archivo);
    
    printf("Datos guardados!");
    
    fclose(archivo);
    return 0;
}
