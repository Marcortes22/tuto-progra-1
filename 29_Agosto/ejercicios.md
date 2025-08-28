# Ejercicios de Programación Orientada a Objetos (POO) en C++

Estos ejercicios están diseñados para practicar la creación de **clases**, la **implementación en archivos `.h`**, el uso de **constructores**, **métodos**, **herencia simple** y **funciones independientes** en C++.  
Los ejercicios van de **fácil a un poco más avanzado**.

---

## Ejercicio 1 - Clase Persona

**Objetivo:** Crear una clase simple y usar métodos de acceso.

**Instrucciones:**

1. Crear un archivo `Persona.h`.
2. Declarar e implementar dentro de este archivo la clase `Persona` con los siguientes atributos privados:
   - `int id`
   - `string nombre`
   - `int edad`
3. Implementar un **constructor** que inicialice todos los atributos.
4. Crear **getters y setters** para cada atributo.
5. Crear un método `Mostrar()` que imprima todos los datos de la persona.
6. Crear un archivo `main.cpp` donde se:
   - Importe la clase con `#include "Persona.h"`
   - Cree al menos un objeto `Persona`
   - Llame a `Mostrar()` para mostrar los datos.

---

## Ejercicio 2 - Clase Estudiante y Función de Promedio

**Objetivo:** Practicar herencia y funciones independientes.

**Instrucciones:**

1. Crear un archivo `Estudiante.h`.
2. Declarar e implementar la clase `Estudiante` que **herede de `Persona`**.
3. Agregar atributos privados adicionales:
   - `int nota1`
   - `int nota2`
   - `int nota3`
4. Implementar un **constructor** que inicialice todos los atributos (heredados y propios).
5. Crear **getters y setters** para las notas.
6. Crear un método `Mostrar()` que muestre todos los datos incluyendo las notas.
7. Crear un archivo `Funciones.h` con una función independiente:
   - `float Promedio(int a, int b, int c)` que calcule el promedio de tres notas.
8. En `main.cpp`:
   - Crear un objeto `Estudiante`.
   - Mostrar sus datos.
   - Usar la función `Promedio()` para calcular y mostrar el promedio de sus notas.

---

## Ejercicio 3 - Clase Profesor y Herencia

**Objetivo:** Practicar herencia simple y funciones independientes.

**Instrucciones:**

1. Crear un archivo `Profesor.h`.
2. Declarar e implementar la clase `Profesor` que **herede de `Persona`**.
3. La clase `Profesor` debe heredar **los atributos de `Persona`**:
   - `int id`
   - `string nombre`
   - `int edad`
4. La clase `Profesor` debe agregar **atributos propios**:
   - `string materia`
   - `int añosExperiencia`
5. Implementar un **constructor** que inicialice todos los atributos (heredados y propios).
6. Crear **getters y setters** para los nuevos atributos (`materia` y `añosExperiencia`).
7. Crear un método `Mostrar()` que muestre todos los datos heredados de `Persona` y los atributos propios de `Profesor`.
8. Crear un archivo `FuncionesProfesor.h` con una función independiente:
   - `bool EsSenior(Profesor p)` que devuelva `true` si `añosExperiencia >= 10` y `false` si es menor.
9. En `main.cpp`:
   - Crear al menos un objeto `Profesor`.
   - Llamar a `Mostrar()` para mostrar sus datos.
   - Usar la función `EsSenior()` para imprimir si el profesor es senior o no.
