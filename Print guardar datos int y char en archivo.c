/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre[20];
    int matricula;
    printf("Ingrese nombre: ");
    gets(nombre);
    printf("Ingrese matricula: ");
    scanf("%d", &matricula);
    
    FILE * archivo;
    archivo=fopen("alumnos.txt", "a");
    
    if (archivo == NULL){
        printf("El archivo no existe!");
        exit(1);
    }
    fputs(nombre, archivo);
    fprintf(archivo, &matricula);
    
    printf("Datos guardados!");
    
    fclose(archivo);
    return 0;
}
