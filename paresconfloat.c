/*Generar un programa que permita realizar el siguiente cálculo:
a+147*b+253, donde:
a y b son números reales que se ingresan por teclado
Considerar que a y b deben ser pares, ésa es la única restricción. En el caso de que alguno no
sea par, se debe devolver un mensaje indicando “No se puede realizar el cálculo porque alguno
de los números ingresados es par”.*/

#include <stdio.h>
#include <math.h>

int main(){
    
    float num1, num2, resul;
    resul=0;
    printf("Ingrese el primer numero: ");
    scanf("%f", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%f", &num2);
    
    float res1= fmod(num1, 2);
    float res2=fmod(num2, 2);
    
    if ((res1 ==0)&&(res2==0)){
        resul= num1 + 147 * num2 + 253;
        printf("El resultado es: %.2f", resul);
    }else{
        printf("No se puede realizar el calculo porque alguno de los numeros ingresados es impar");
    }

    return 0;
}