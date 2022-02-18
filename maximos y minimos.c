/*•	Hacer un algoritmo que imprima el mayor y el menor de una serie de 5 
números que vamos introduciendo por teclado.*/

#include <stdio.h>
int main(){
    int max, min;
    min=10000;
    max=0;
    int num[5];
    for(int i=0; i<5;i++){
        printf("Escriba el numero: ");
        scanf("%d", &num[i]);
    }
    for(int i=0; i<5; i++){
        
        if (num[i]<min){
            min=num[i];
        }
        if(num[i]>max){
            max=num[i];
        }
    }
    printf("El numero minimo es: %d\n", min);
    printf("El numero maximo es: %d", max);
}



