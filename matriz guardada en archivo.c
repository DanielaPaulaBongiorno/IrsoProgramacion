/*GENERAR UN PROGRAMA QUE PERMITA CARGAR LOS VALORES ENTEROS DE UNA MATRIZ DE 5 X 3 POSICIONES
A UN ARCHIVO.*/

#include <stdio.h>

int main()
{
    int matriz[5][3];
    
    FILE * archivo;
    archivo=fopen("matriz.txt", "w");
    int i, j;
    for(i=0; i<5;i++){
        for(j=0;j<3;j++){
            
            printf("Ingrese el valor de la posicion [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            
            
            fprintf(archivo, "%d  ", matriz[i][j]);
            
        }
        fprintf(archivo, "\n");
    }
    fclose(archivo);
    
    return 0;
}