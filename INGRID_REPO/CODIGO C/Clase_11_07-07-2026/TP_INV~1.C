/* ============================================================
   PROGRAMACION I - UTN INSPT - Comision 1.605
   Catedra: Ing. Alejandro J. Behringer / Juan Capia
   Clase 14 (07/07/2026) - Unidad 6: Arreglos unidimensionales
   Trabajo practico de clase: Biblioteca de San Pedro
   ============================================================
   NOMBRE Y APELLIDO: _______________________________
   ============================================================
   Horario de trabajo: 19:00 a 20:45 (Parte 1 y 2, obligatorias)
   Parte 3 (BONUS): opcional, para quien termine antes de horario
   ============================================================ */
/*
MANEJO DE COLORES
***************
 
Color	     Código
Rojo	    \033[31m
Verde	    \033[32m
Amarillo	\033[33m
Azul	    \033[34m
Magenta	    \033[35m
Cyan	    \033[36m
Blanco	    \033[37m
Reset (volver al color normal)	\033[0m
ejemplo
printf("\033[31mA\033[0m\n"); // A en rojo



NEGRITA
\033[1m
DESACTIVAR NEGRITA
\033[0m

*/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "../../utiles.h"

#define N 10
#define OPCION_MIN 1
#define OPCION_MAX 6
/* Si activan la Parte 3 (BONUS), cambiar OPCION_MAX a 9 */

/* ---------- Prototipos - ya provistos (NO modificar) ---------- */
void mostrarMenu(void);
void mostrarListado(char titulos[][50], float precios[], int stockTotal[], int prestados[], int n);

/* ---------- Prototipos - Parte 2 (obligatorio) ---------- */
int  prestarLibro(int stockTotal[], int prestados[], int indice);
int  devolverLibro(int prestados[], int indice);
void estadisticas(float precios[], int n, float *promedio, int *cantSobrePromedio);
void masCaro(char titulos[][50], float precios[], int n);

/* ---------- Prototipos - Parte 3 (BONUS, opcional) ---------- */
int  libroMasPrestado(int prestados[], int n);
int  contarEnRango(float precios[], int n, float minimo, float maximo);
void aplicarDescuento(float precios[], int n, float porcentaje);

int main(void)
{
    utf8();
    system("cls");

    /* Vectores precargados (paralelos) */
    char titulos[N][50] = {
        "El Principito",
        "Cien anios de soledad",
        "Rayuela",
        "Ficciones",
        "El Aleph",
        "Crimen y castigo",
        "1984",
        "Orgullo y prejuicio",
        "Don Quijote",
        "El hobbit"
    };
    float precios[N] = {350.50, 520.00, 480.75, 400.00, 390.00,
                        550.00, 420.00, 380.00, 600.00, 500.00};
    int stockTotal[N] = {3, 2, 4, 5, 3, 2, 6, 4, 3, 2};
    int prestados[N]  = {1, 2, 1, 0, 2, 0, 4, 0, 1, 0};

    int opcion;
    int salir = 0;
    int indice;

    do {
        system("cls");
        mostrarMenu();
        opcion = pedirEnteroRango("Ingrese una opcion: ", OPCION_MIN, OPCION_MAX);

        switch(opcion) 
        {
            case 1: 
            {
                mostrarListado(titulos, precios, stockTotal, prestados, N);
                break;
            }
            case 2: 
            {
                int libroElegido = pedirEnteroRango("Ingrese el numero de libro (1-10): ", 1, N);
                indice = libroElegido - 1;
                // habilitar lo de abajo una vez que la funcion este implementada
                // **************************************************************
                /*
                if(prestarLibro(stockTotal, prestados, indice))
                    printf("Prestamo registrado: \"%s\"\n", titulos[indice]);
                else
                    printf("No hay ejemplares disponibles de \"%s\".\n", titulos[indice]);
                
                */
                break;
            }
            case 3: 
            {
                int libroElegido = pedirEnteroRango("Ingrese el numero de libro (1-10): ", 1, N);
                indice = libroElegido - 1;
                if(devolverLibro(prestados, indice))
                    printf("Devolucion registrada: \"%s\"\n", titulos[indice]);
                else
                    printf("No habia ejemplares prestados de \"%s\".\n", titulos[indice]);
                break;
            }
            case 4: 
            {
                float promedio;
                int cantSobrePromedio;
                estadisticas(precios, N, &promedio, &cantSobrePromedio);
                printf("Precio promedio: $%.2f\n", promedio);
                printf("Libros con precio mayor al promedio: %d\n", cantSobrePromedio);
                break;
            }
            case 5: 
            {
                printf("Libro(s) mas caro(s):\n");
                masCaro(titulos, precios, N);
                break;
            }
            case 6: 
            {
                printf("Hasta luego!\n");
                salir = 1;
                break;
            }

            /* --- ZONA PARTE 3 (BONUS - opcional) ---
               Descomentar estos casos SOLO despues de tener la Parte 2
               terminada y probada, y cambiar OPCION_MAX a 9 mas arriba.

            case 7: {
                int indiceMasPrestado = libroMasPrestado(prestados, N);
                printf("Libro mas prestado: \"%s\" (%d prestamos activos)\n",
                       titulos[indiceMasPrestado], prestados[indiceMasPrestado]);
                break;
            }
            case 8: {
                float minimo, maximo;
                leerFlotante("Precio minimo del rango: ", &minimo);
                leerFlotante("Precio maximo del rango: ", &maximo);
                int cantidadEnRango = contarEnRango(precios, N, minimo, maximo);
                printf("Cantidad de libros en ese rango de precio: %d\n", cantidadEnRango);
                break;
            }
            case 9: {
                float porcentaje;
                leerFlotante("Porcentaje de descuento a aplicar: ", &porcentaje);
                aplicarDescuento(precios, N, porcentaje);
                printf("Descuento aplicado a los libros sobre el promedio.\n");
                break;
            }
            --- FIN ZONA PARTE 3 --- */
        }

        if(opcion != 6)
            pausa();

    } while(!salir);

    return 0;
}

/* ========== FUNCIONES A IMPLEMENTAR - PARTE 2 (obligatorio) ========== */

int prestarLibro(int stockTotal[], int prestados[], int indice)
{
    printf ("/* A desarrollar */");
    /* A desarrollar */
}

int devolverLibro(int prestados[], int indice)
{
    printf ("/* A desarrollar */");
    /* A desarrollar */
}

void estadisticas(float precios[], int n, float *promedio, int *cantSobrePromedio)
{
    /* A desarrollar */
    printf ("/* A desarrollar */");

}

void masCaro(char titulos[][50], float precios[], int n)
{
    /* A desarrollar */
    printf ("/* A desarrollar */");
}

/* ========== FUNCIONES A IMPLEMENTAR - PARTE 3 (BONUS, opcional) ========== */

int libroMasPrestado(int prestados[], int n)
{
    /* A desarrollar */
    printf ("/* A desarrollar */");
}

int contarEnRango(float precios[], int n, float minimo, float maximo)
{
    /* A desarrollar */
    printf ("/* A desarrollar */");
}

void aplicarDescuento(float precios[], int n, float porcentaje)
{
    /* A desarrollar */
    printf ("/* A desarrollar */");
}


/* ---------- Funciones ya provistas (NO modificar) ---------- */

void mostrarMenu(void)
{
    printf("========================================\n");
    printf("      BIBLIOTECA DE SAN PEDRO\n");
    printf("========================================\n");
    printf("\033[33m1)\033[0m Ver listado de libros\n");
    printf("\033[33m2)\033[0m Prestar un libro\n");
    printf("\033[33m3)\033[0m Devolver un libro\n");
    printf("\033[33m4)\033[0m Ver estadisticas de precios\n");
    printf("\033[33m5)\033[0m Ver libro(s) mas caro(s)\n");
    printf("\033[33m6)\033[0m Salir\n");
    printf("========================================\n");
}

void mostrarListado(char titulos[][50], float precios[], int stockTotal[], int prestados[], int n)
{
    int disponibles;

    printf("\nListado de libros:\n");
    for(int i = 0; i < n; i++) {
        disponibles = stockTotal[i] - prestados[i];
        printf("\033[32m%d -\033[33m %s - \033[35m$%.2f -\033[36m Stock: %d - \033[31mDisponibles: %d\033[0m\n",
               i, titulos[i], precios[i], stockTotal[i], disponibles);
    }
    printf("-------------------------\n");
}
