### TRABAJO PRÁCTICO N° 1: Fundamentos en Lenguaje C
**Materia:** Programación I   Comision 1-605
**Institución:** Instituto Nacional Superior del Profesorado Técnico - UTN  
**Ciclo Lectivo:** 2026

---

### 📋 1. Objetivos
* Familiarizarse con la sintaxis estándar de **C (ANSI C / C11)**.
* Gestionar la entrada y salida de datos mediante `printf()` y `scanf()`.
* Comprender el uso de modificadores de formato (`%d`, `%f`, `%.2f`).
* Aplicar lógica de asignación, constantes y variables auxiliares.

---

### 📝 2. Consignas

### Ejercicio 1: Calculador de IVA (Constantes)
Desarrollar un programa que permita calcular el impacto impositivo sobre un producto. 
* **Reto:** Solicitar al usuario el precio base de un artículo (tipo `float`). El programa debe calcular y mostrar el precio final tras aplicarle un **IVA del 21%**.
* **Requisito técnico:** El valor del IVA debe definirse utilizando una constante (`#define` o `const`).

### Ejercicio 2: Conversor de Tiempos (Aritmética de Módulo)
Implementar un sistema que convierta unidades de tiempo lineales a un formato de reloj.
* **Reto:** Solicitar al usuario una cantidad entera de segundos (ejemplo: `3661`).
* **Salida:** Mostrar el equivalente en formato **Horas : Minutos : Segundos**.
* **Concepto clave:** Utilizar los operadores de división entera (`/`) y residuo/módulo (`%`).

### Ejercicio 3: Área y Perímetro de un Rectángulo
Este ejercicio ayuda a entender cómo las variables almacenan resultados intermedios.
* **Reto:** Solicitar la base y la altura de un rectángulo. 
* **Proceso:** Calcular y mostrar el **Área** (base × altura) y el **Perímetro** (2 × (base + altura)).
* **Nota:** Prestar especial atención al uso de paréntesis para asegurar la precedencia de las operaciones.

### Ejercicio 4: Intercambio de Valores (El "Truco del Vaso")
Un acertijo clásico de lógica de programación para entender la gestión de memoria.
* **Reto:** Dadas dos variables `a = 5` y `b = 10`, el programa debe intercambiar sus valores de modo que, al finalizar, `a` valga 10 y `b` valga 5.
* **Restricción:** Se debe utilizar una **tercera variable auxiliar** para realizar el intercambio.

### Ejercicio 5: Media Aritmética de Exámenes (Tipos de Datos)
Perfecto para entender la precisión en los tipos de datos de punto flotante.
* **Reto:** Solicitar 3 notas (pueden tener decimales) y calcular el promedio.
* **Salida:** El resultado debe mostrarse con una precisión de **dos decimales** utilizando el modificador de formato adecuado en el `printf`.

---

### ⚠️ 3. Pautas de Entrega y Estilo

### Requisitos Técnicos:
* **Librerías:** Incluir la cabecera estándar `<stdio.h>`.
* **Identación:** El código debe estar correctamente tabulado para facilitar su lectura.
* **Nomenclatura:** Usar nombres de variables descriptivos (evitar `x`, `y`, `z`).
* **Estructura:** El programa debe finalizar con `return 0;` dentro de la función `main`.

### Formato de Entrega:
Los códigos fuente (`.c`) deben enviarse comprimidos en un archivo titulado:  
`TP2_C_Apellido_Nombre.zip`

---

### ✔️ Fin del Trabajo Práctico -- Programación I

### Profesores: Beringher,Alejandro-Capia,Juan

