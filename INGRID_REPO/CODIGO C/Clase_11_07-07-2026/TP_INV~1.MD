## PROGRAMACIÓN I — UTN INSPT
**Comisión 1.605 — Ciclo lectivo 2026**
Cátedra: Ing. Alejandro J. Behringer / Juan Capia
Clase 14 (07/07/2026) — Unidad 6: Arreglos unidimensionales — Práctica pre-parcial

---

### Trabajo práctico de clase: Biblioteca de San Pedro

**Horario de trabajo:** 19:00 a 20:45 (Parte 1 y Parte 2, obligatorias).
Quien termine antes tiene disponible la **Parte 3 (Desafío)** para seguir trabajando hasta el final de la clase (22:30). No es obligatoria ni se penaliza no llegar a ella. Es simplemente un modelo de parcial, para probarse a sí mismos el nivel de resolución.


**Reglas de la cátedra que aplican:** sin `while(1)`, sin `break`/`continue` para cortar bucles (el `break` de cada `case` del `switch` sí corresponde, no es lo mismo que cortar un bucle), sin *magic numbers* (usar `#define`), nombres de variables descriptivos, funciones con responsabilidad única (una función que calcula no imprime, y viceversa).

---

### Contexto

La Biblioteca de San Pedro tiene un inventario de 10 títulos. Además del precio de referencia de cada libro, la biblioteca lleva el control de cuántos ejemplares tiene de cada uno y cuántos están actualmente prestados. Se cuenta con cuatro vectores paralelos, ya cargados en `main`:

- `titulos[10][50]`: nombre de cada libro.
- `precios[10]`: precio de referencia (`float`).
- `stockTotal[10]`: cantidad total de ejemplares que posee la biblioteca de cada título.
- `prestados[10]`: cantidad de ejemplares de ese título que están prestados en este momento.

La cantidad **disponible** de un libro nunca se guarda: se calcula como `stockTotal[i] - prestados[i]` cada vez que se necesita.

El programa presenta un **menú** que se repite hasta que el usuario elige salir. Cada opción del menú requiere una función que ustedes tienen que completar.

---

### Parte 1 — Estructura base (ya resuelta, no tocar)

El archivo que reciben ya trae: la carga de los cuatro vectores, la función `mostrarMenu` (imprime las opciones), la función `mostrarListado` (imprime título, precio, stock total y disponibles de cada libro) y el `main` con el bucle del menú armado mediante un `switch` y una bandera `salir` (nada de `while(1)`).

Compilen y corran el archivo tal cual llega: el menú tiene que aparecer y funcionar la opción 1 (listado) y la 6 (salir). Las demás opciones van a fallar o no hacer nada hasta que completen la Parte 2 — es esperable.

**Menú:**

```
========================================
      BIBLIOTECA DE SAN PEDRO
========================================
1) Ver listado de libros
2) Prestar un libro
3) Devolver un libro
4) Ver estadisticas de precios
5) Ver libro(s) mas caro(s)
6) Salir
========================================
```

---

### Parte 2 — Funciones a resolver (obligatorio, 19:00–20:45)

Implementar **exclusivamente** estas cuatro funciones (las encuentran vacías en el archivo):

**1. `int prestarLibro(int stockTotal[], int prestados[], int indice)`**

- Si hay al menos un ejemplar disponible del libro (`stockTotal[indice] - prestados[indice] > 0`), registra el préstamo incrementando `prestados[indice]` y devuelve `1`.
- Si no hay ejemplares disponibles, no modifica nada y devuelve `0`.
- No imprime nada — el `main` decide qué mensaje mostrar según lo que devuelva la función.

**2. `int devolverLibro(int prestados[], int indice)`**

- Si el libro tiene al menos un ejemplar prestado (`prestados[indice] > 0`), registra la devolución decrementando `prestados[indice]` y devuelve `1`.
- Si no había ningún ejemplar prestado de ese libro, no modifica nada y devuelve `0`.
- No imprime nada, por el mismo motivo que la anterior.

**3. `void estadisticas(float precios[], int n, float *promedio, int *cantSobrePromedio)`**

- Calcula el promedio de todos los precios y lo guarda en la variable apuntada por `promedio`.
- Cuenta cuántos libros tienen un precio **estrictamente mayor** que ese promedio y guarda ese valor en `*cantSobrePromedio`.
- No imprime nada. Toda la salida se hace desde `main`.

**4. `void masCaro(char titulos[][50], float precios[], int n)`**

- Determina el precio máximo del inventario.
- Imprime el/los título/s cuyo precio coincida con ese máximo (puede haber empate, mostrar todos los que empatan).
- Esta función sí imprime — es su responsabilidad, a diferencia de las otras tres.

**Ejemplo de ejecución (opción 1, listado inicial):**

```
========================================
      BIBLIOTECA DE SAN PEDRO
========================================
1) Ver listado de libros
2) Prestar un libro
3) Devolver un libro
4) Ver estadisticas de precios
5) Ver libro(s) mas caro(s)
6) Salir
========================================
Ingrese una opcion: 1

Listado de libros:
0 - El Principito - $350.50 - Stock: 3 - Disponibles: 2
1 - Cien anios de soledad - $520.00 - Stock: 2 - Disponibles: 0
2 - Rayuela - $480.75 - Stock: 4 - Disponibles: 3
3 - Ficciones - $400.00 - Stock: 5 - Disponibles: 5
4 - El Aleph - $390.00 - Stock: 3 - Disponibles: 1
5 - Crimen y castigo - $550.00 - Stock: 2 - Disponibles: 2
6 - 1984 - $420.00 - Stock: 6 - Disponibles: 2
7 - Orgullo y prejuicio - $380.00 - Stock: 4 - Disponibles: 4
8 - Don Quijote - $600.00 - Stock: 3 - Disponibles: 2
9 - El hobbit - $500.00 - Stock: 2 - Disponibles: 2
-------------------------
```

**Ejemplo de ejecución (opción 2, préstamo sin stock disponible — libro 1, "Cien anios de soledad"):**

```
Ingrese una opcion: 2
Ingrese el numero de libro (1-10): 2
No hay ejemplares disponibles de "Cien anios de soledad".
```

**Ejemplo de ejecución (opción 4, estadísticas):**

```
Ingrese una opcion: 4
Precio promedio: $459.12
Libros con precio mayor al promedio: 5
```

(El promedio puede variar levemente según redondeo; se acepta cualquier formato razonable con dos decimales.)

---

### Parte 3 — Desafío (opcional, para quien termine antes de 20:45)

Estas funciones están declaradas y comentadas en el bloque BONUS del `main` (incluyendo las líneas del `switch` para las opciones 7, 8 y 9, y el ajuste del rango del menú de 1–6 a 1–9). Descomenten ese bloque **solo** después de tener la Parte 2 funcionando y probada.

**5. `int libroMasPrestado(int prestados[], int n)`**

- Busca cuál es el índice del libro con mayor cantidad de ejemplares prestados en este momento.
- Devuelve ese índice. No imprime nada — el `main` se encarga de mostrar el título correspondiente a partir del índice devuelto.

**6. `int contarEnRango(float precios[], int n, float minimo, float maximo)`**

- Devuelve cuántos libros tienen precio entre `minimo` y `maximo`, ambos límites inclusive.
- No imprime nada.

**7. `void aplicarDescuento(float precios[], int n, float porcentaje)`**

- Aplica un descuento del `porcentaje` indicado a todos los libros cuyo precio sea mayor al promedio del inventario (pueden reutilizar la lógica de `estadisticas` llamándola desde acá).
- Modifica el vector `precios` original. No imprime nada.

No hay salida de ejemplo fija para la Parte 3: prueben con distintos rangos y porcentajes, y verifiquen ustedes mismos que el resultado tenga sentido (por ejemplo, volviendo a elegir la opción 1 después de aplicar el descuento).

---

### Indicaciones generales

- Programar en ANSI C.
- No se permite el uso de variables globales.
- No usar `break` ni `continue` para cortar bucles (`while`, `do-while`, `for`): la condición de corte tiene que ser explícita en el encabezado o mediante una bandera. El `break` dentro de cada `case` del `switch` es la forma correcta de evitar el paso al siguiente caso y no está alcanzado por esta restricción.
- Comentarios solo donde expliquen una decisión no obvia, no para repetir lo que ya dice el código.
