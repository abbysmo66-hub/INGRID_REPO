#include <stdlib.h> 
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <conio.h>
#include <stdbool.h>
#include <math.h>
#define n 10
void cargarVector (int vec[], int tam);
void mostrarVector (int vec[], int tam);
int contarPares (int vec[], int tam);
int contarImpares (int vec[], int tam);
int main() { 
    int vec[n]; 
    cargarVector (vec, n); 
    mostrarVector (vec, n); 
    
    int contPares;; 
    contPares = contarPares (vec, n); 
    int contImpares;
    contImpares = contarImpares (vec, n);
    
    // Added double quotes to strings
    printf("\nCantidad de pares: %d", contPares); 
    printf("\nCantidad de impares: %d", contImpares);
    
    return 0; 
} 
int contarPares (int vec[], int tam) { 
    int cont = 0; 
    for (int i = 0; i < tam; i++) { 
        if (vec[i] % 2 == 0) { 
            cont++; 
        } 
    } 
    return cont; 
}
int contarImpares (int vec[], int tam) { 
    int cont = 0; 
    for (int i = 0; i < tam; i++) { 
        if (vec[i] % 2 != 0) { 
            cont++; 
        } 
    } 
    return cont; 
}