#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    float base,altura,resultado;

    printf("ingresar base de tu rectangulo:\n");
    scanf("%f",&base);
    printf("ingresar altura de tu rectangulo:\n");   
    scanf("%f",&altura);

    float area=(base*altura);
    float perimetro=(2*area);

    printf("El Area de tu rectangulo es: %f y el Perimetro de tu rectangulo es: %f",area, perimetro);
    return 0;
}