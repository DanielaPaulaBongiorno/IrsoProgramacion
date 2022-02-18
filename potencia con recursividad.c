/*Ejercicio 1: Realizar un subprograma que permita calcular la siguiente serie:
a^n+a^(n-1)+a^(n-2)+...+a^2+a+1*/

#include <stdio.h>

int potencia(int num, int ex);

int main(){
    
    int num, ex;
    printf("Escribe el numero: ");
    scanf("%d", &num);
    printf("Escribe la potencia: ");
    scanf("%d", &ex);
    
    int resultado = potencia(num, ex);
    printf("El resultado de la potencia de %d elevado a %d es %d", num, ex, resultado);


    return 0;
    
    
}
int potencia(int numero, int exponente){
    
    
    if (exponente==1){
        return numero;
    }else{
        numero=numero*potencia(numero, exponente-1);
        return numero;
    }
}