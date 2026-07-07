/*

## Ejercicio 1 — Vectores paralelos: mejor promedio

Cargar dos vectores paralelos de 8 elementos:
uno de enteros (`legajos`)
 y otro de reales (`notas`), donde `notas[i]` 
 corresponde a `legajos[i]`. 
 Encontrar y mostrar el legajo y la nota del alumno con la calificación más alta.

Prototipos:

```c
void cargarLegajos(int legajos[], int cantidad, int minimo, int maximo);
void cargarNotas(float notas[], int cantidad, float minima, float maxima);
int posicionDeLaMejorNota(float notas[], int cantidad);
```

*/

#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define CANTIDAD 8
#define MIN_NOTA 1.0
#define MAX_NOTA 10.0
#define MAX_LEG 9999
#define  MIN_LEG 1000


void cargarLegajos(int legajos[], int cantidad, int minimo, int maximo); // minimo legajo y maximo legajo
void cargarNotas(float notas[], int cantidad, float minima, float maxima); // minima nota  y maxima nota
int posicionDeLaMejorNota(float notas[], int cantidad);
void mostrarVector(int legajos[], float notas[], int cantidad);
int main()
{
    int legajo[CANTIDAD];
    float notas[CANTIDAD];
    int posMejorNota;
    srand(time(NULL)); // SEMILLA ALEatoria
    /*
    1ro cargo los legajos
    2do cargar las notas
     muestro lo cargado
     busco en que posicion esta la mejor nota
     la muestro 
     termino
    */
    cargarLegajos(legajo,CANTIDAD,MIN_LEG,MAX_LEG);
    cargarNotas(notas,CANTIDAD,MIN_NOTA,MAX_NOTA);
    mostrarVector(legajo,notas,CANTIDAD);
    posMejorNota=posicionDeLaMejorNota(notas, CANTIDAD);
    printf("el alumno con la mejor nota es el legajo:%d con nota:%.2f\n",
        legajo[posMejorNota], notas[posMejorNota]);
        return 0;
}
void cargarLegajos(int legajos[], int cantidad, int minimo, int maximo)
{
    int i;
    for (i=0;i<cantidad;i++)
    {
        legajos[i]=rand()%(maximo-minimo+1)+minimo;
    }
}
void cargarNotas(float notas[], int cant, float ci, float cs)
{
    
    int i;
    for (i=0;i<cant;i++)
    {
        notas[i]= ((float) rand()/ RAND_MAX )* (cs-ci)+ci;
    }
}
int posicionDeLaMejorNota(float notas[], int cant)
{
    int posMax=0;
    int i;
    for (i=0; i<cant;i++)
    {
        if(notas[i]>notas[posMax])
        {
            posMax=i;
        }
    }
    return posMax;
}

void mostrarVector(int legajos[], float notas[], int cant)
{
    int i;
    for(i=0;i<cant;i++)
    {
        printf("%d\t%.2f\n",legajos[i], notas[i]);
    }
}
