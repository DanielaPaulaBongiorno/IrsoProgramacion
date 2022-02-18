/*Imprimir un vector cargado por teclado, de manera recursova.*/

#include <stdio.h>

int x;

int vector[10];

void imprimir(int index);

int main()
{
    printf("Ingrese cada numero del vector: \n");
    for(int i=0; i<10;i++){
        scanf("%d", &vector[i]);
    }
    printf("\n\n");
    imprimir(0);
    return 0;
}
void imprimir(int index){
    x=index;
    if(x<10){
        printf("%d  ", vector[x]);
        imprimir(index+1);
    }
}        
    
