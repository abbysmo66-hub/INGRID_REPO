
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdbool.h> // Para usar el tipo bool
#include "utiles.h"

#define N 5
#define NUM_MAX 100
#define NUM_MIN 1
void ordenarBubbleSort_Desc(int v[], int tam);
void ordenarBubbleSort_Asc(int v[], int tam);
void MostrarVector(int [],char *);
void CargarVector(int[],int, char *);


int main()
{
    int vec[N];
    srand(time(NULL));
    CargarVector(vec,N, "Carga de Datos");
    MostrarVector(vec, "Vector Desordenado");
    pausa();
    ordenarBubbleSort_Asc(vec,N);
    MostrarVector(vec, "Vector Ordenado Ascendente");
    pausa();
    ordenarBubbleSort_Desc(vec,N);
    MostrarVector(vec, "Vector Ordenado Descendente");
    pausa();
return 0;
}

void CargarVector(int x[], int tam, char *tit)
{
    int i;
    printf("\n%s\n",tit);
    for (i = 0; i < tam; i++)
    {
        x[i]=rand()%(NUM_MAX-NUM_MIN+1)+NUM_MIN; // genero numeros aleatorios entre NUM_MIN y NUM_MAX
    }
    
}

void ordenarBubbleSort_Asc(int x[],int tope)		
{		
	// y posse laa cantidad de valores a Ordenar
    int i,cota=tope-1,k=1,aux;	// k es una bandera, que me indica que se termino de ordenar
	while(k)	
	{	
	        k=0;	// partimos del supuesto que esta ordenado
	        for(i=0;i<cota;i++)	
	        {	
	            if(x[i]>x[i+1])	// por este signo nos permite ordenar de forma ascendente
	            {	
	                // aqui se produce el swap
                    aux=x[i];	
	                x[i]=x[i+1];	
	                x[i+1]=aux;	
	                k=i;	// aqui k toma el valor donde fue ordenado por ultima vez
	            }	
	       }	
	cota=k;	// aqui se lo pasa a cota, con lo cual lo limita en las iteracioners
	}	
}		
void MostrarVector(int x[], char *tit)
{
    int i;
    printf("\n%s\n",tit);
    for (i = 0; i < N; i++)
    {
        printf("%3d\n",x[i]);
    }
}

void ordenarBubbleSort_Desc(int v[], int tam)
{
    // y posse laa cantidad de valores a Ordenar
    int i, cota = tam - 1, k = 1, aux; // k es una bandera, que me indica que se termino de ordenar
    while (k)
    {
        k = 0; // partimos del supuesto que esta ordenado
        for (i = 0; i < cota; i++)
        {
            if (v[i] < v[i + 1]) // por este signo nos permite ordenar de forma descendente
            {
                // aqui se produce el swap
                aux = v[i];
                v[i] = v[i + 1];
                v[i + 1] = aux;
                k = i; // aqui k toma el valor donde fue ordenado por ultima vez
            }
        }
        cota = k; // aqui se lo pasa a cota, con lo cual lo limita en las iteracioners
    }
}