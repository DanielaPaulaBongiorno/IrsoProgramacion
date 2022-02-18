/*•	Ingresar dos números enteros y luego presentar el siguiente menú de opciones: 
1- SUMAR 2- RESTAR 3- MULTIPLICAR 4- DIVIDIR A esto el usuario debe responder 
con la opción correspondiente a la operación que desee realizar entre los números. 
• Opción 1: llamar a la función suma, cuyo prototipo es int suma (int, int); 
la función recibe los 2 enteros ingresados y retorna el resultado de la suma 
para que main lo muestre. • Opción 2: llamar a la función resta, cuyo prototipo 
es void resta (int, int); la función recibe los 2 enteros ingresados, 
calcula el resultado de la resta y lo muestra. • Opción 3: el cálculo y 
la muestra se realiza en el main • Opción 4: llamar a la función divi, 
cuyo prototipo es float divi (int, int); la función recibe los 2 enteros 
ingresados y retorna el resultado exacto de la división para que main lo muestre.*/

#include <stdio.h>

    int sumar(int num1, int num2){
        int res=num1+num2;
        return res;
    }
    int restar(int num1, int num2){
        int res=num1-num2;
        return res;
    }
    int multiplicar(int num1, int num2){
        int res=num1*num2;
        return res;
    }
    float dividir(int num1, int num2){
        if(num2!=0){
        
            float res=num1/num2;
            return res;
        }else{
            printf("La division no es factible!");
        }
    }

int main(){
    
    printf("1.SUMAR - 2.RESTAR - 3.MULTIPLICAR - 4.DIVIDIR \n");
    printf("Elegir la opcion: ");
    int opc, a, b;
    scanf("%d", &opc);
    
    switch(opc){
        
        case 1:
        printf("Ingrese numero: ");
        scanf("%d", &a);
        printf("Ingrese numero: ");
        scanf("%d", &b);
        printf("El resultado es: %d", sumar(a, b));
        break;
        
        case 2:
        printf("Ingrese numero: ");
        scanf("%d", &a);
        printf("Ingrese numero: ");
        scanf("%d", &b);
        printf("El resultado es: %d", restar(a, b));
        break;
        
        case 3:
        printf("Ingrese numero: ");
        scanf("%d", &a);
        printf("Ingrese numero: ");
        scanf("%d", &b);
        printf("El resultado es: %d",multiplicar(a, b));
        break;
        
        case 4:
        printf("Ingrese numero: ");
        scanf("%d", &a);
        printf("Ingrese numero: ");
        scanf("%d", &b);
        printf("El resultado es: %.2f", dividir(a, b));
        break;
        default:
        printf("Ha ingresado una opcion incorrecta!");
        printf("Reingrese opcion: ");
        scanf("%d", &opc);
        
        
    }
    
    
    
}



