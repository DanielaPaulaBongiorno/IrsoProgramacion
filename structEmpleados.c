#include <stdio.h>
#include <stdlib.h>
struct{
	int legajo;
    float sueldo;
    float adicional;
}emp;
int main(){ 
    printf("Ingrese legajo: ");
    scanf("%d", &emp.legajo);
    printf("Ingrese sueldo: ");
    scanf("%f", &emp.sueldo);
    printf("Ingrese adicional: ");
    scanf("%f", &emp.adicional);
    
    FILE *fichero; 
    fichero = fopen("datainfo.bn", "wt");
    
    if (fichero ==NULL){
        printf("Error de apertura \n");
           
    }
    if (emp.legajo >1 && emp.legajo< 5454){
        if (emp.sueldo<350){
            emp.sueldo = emp.sueldo + (emp.adicional*0,5);
            fwrite(&emp, sizeof(emp), 1, fichero);
            printf("Datos guardados");     
        }
    }
    if (emp.legajo >6000 && emp.legajo< 9800){
        if (emp.sueldo<200){
            emp.sueldo = emp.sueldo + (emp.adicional*0.5);
            fwrite(&emp, sizeof(emp), 1, fichero);
            printf("Datos guardados");     
        }
    }
    if (emp.legajo >15300){
        emp.sueldo = emp.sueldo + (emp.adicional*0.5);
        fwrite(&emp, sizeof(emp), 1, fichero);
        printf("Datos guardados");    
    }
    fclose(fichero); 
    int cont=0;
    fichero = fopen("datainfo.bn", "r");
    if(fichero == NULL){
        printf("No se pudo leer el archivo!");
    }else{
        
        while(!feof(fichero)){ //Mientras no se termine el archivo que estoy leyendo...
        fread(&emp, sizeof(emp), 1, fichero);
        if(cont ==0){
          printf("\n\nLegajo: %d \nSueldo: %.2f \n", emp.legajo, emp.sueldo);
        }
        cont++;
        
        }   
    }
}
