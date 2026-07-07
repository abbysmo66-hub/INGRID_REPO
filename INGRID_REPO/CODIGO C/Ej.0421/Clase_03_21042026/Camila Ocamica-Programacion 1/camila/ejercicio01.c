#include <stdio.h>
#include <math.h>
#define IVA 0.21 //#define y const es casi lo mismo.

//Ejercicio 1: Calculador de IVA


int main()
{
    float valor=0;
    float precio=0;


    printf("Ingrese el valor base del articulo\n");
    scanf("%f",&valor);

    precio=valor+(valor*IVA);
    
    printf("El precio final es:%f", precio);
    
    return 0;   //salida sin error
}



