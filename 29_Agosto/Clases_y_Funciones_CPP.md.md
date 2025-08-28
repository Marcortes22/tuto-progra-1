# Organización de Proyecto C++ en Visual Studio (Implementación en `.h`)

Este proyecto en **C++** utiliza Visual Studio y organiza clases y funciones directamente en los archivos `.h`, donde la **declaración y la implementación** están juntas.

---

## 1. Archivos `.h` con implementación

En este enfoque, cada archivo `.h` contiene:

- Declaración de la clase o función.
- Implementación de los métodos directamente en el mismo archivo.

Ejemplo de clase `Estudiante`:

```cpp
#pragma once
#include "Persona2.h"
#include <iostream>
using namespace std;

class Estudiante : public Persona {
private:
    int nota;

public:
    Estudiante(int _id, int _edad, int _nota);

    #pragma region Gets/Sets
    void setNota(int _nota);
    int getNota();
    #pragma endregion

    #pragma region Funciones
    void Mostrar();
    #pragma endregion
};

// Implementación de los métodos

Estudiante::Estudiante(int _id, int _edad, int _nota) : Persona(_id, _edad) {
    nota = _nota;
}

void Estudiante::setNota(int _nota) { nota = _nota; }
int Estudiante::getNota() { return nota; }
void Estudiante::Mostrar() {
    Persona::Mostrar();
    cout << " Nota: " << nota << endl;
}
```

### Uso de Clases en el Archivo Principal

Para utilizar una clase definida en un archivo de cabecera (`.h`), debes incluirla en tu archivo principal, por lo general `main.cpp`. Esto te permite crear objetos (instancias) de esa clase y llamar a sus métodos.

**Ejemplo:**
Para usar la clase `Estudiante` en tu archivo `main.cpp`, debes incluir su archivo de cabecera y luego crear un objeto de la misma.

```cpp
#include "Estudiante.h"
#include <iostream>

int main() {
    // Crear un objeto (instancia) de la clase Estudiante
    // Los valores 1, 18, 95 corresponden a id, edad y nota.
    Estudiante estudiante1(1, 18, 95);

    // Llamar a los métodos del objeto para interactuar con él
    estudiante1.Mostrar();

    // Modificar la nota usando un método
    estudiante1.setNota(100);

    // Volver a mostrar los datos para ver el cambio
    estudiante1.Mostrar();

    return 0;
}
```

## Notas

### `#pragma once`

Esta directiva es una forma estándar de **evitar múltiples inclusiones** de un mismo archivo de cabecera (`.h`) en un único archivo de origen (`.cpp`). Esto previene errores de compilación por redefinición de clases, funciones o variables, ya que asegura que el contenido de un archivo `.h` sea procesado solo una vez.

---

### `#pragma region`

Esta directiva es una característica de **Visual Studio** que permite organizar visualmente el código. No afecta la lógica ni la compilación del programa. Su propósito es ayudar a los desarrolladores a **colapsar y expandir secciones** de código, como los getters y setters o las funciones, para mejorar la legibilidad y la navegación, especialmente en archivos largos.

---

### Lógica de la Clase en el Archivo `.h`

En proyectos de C++ pequeños o en el desarrollo de plantillas, a veces se coloca **toda la lógica de la clase directamente en el archivo `.h`**. Aunque esto funciona, la práctica recomendada para proyectos más grandes y complejos es mantener la separación entre declaración (`.h`) e implementación (`.cpp`). La separación mejora la modularidad del código y acelera los tiempos de compilación.

## 2. Funciones Independientes en un `.h`

Es posible definir la lógica de funciones directamente en un archivo de cabecera. Esto es útil para proyectos pequeños o para funciones de plantilla donde la implementación debe estar visible para el compilador en el momento de la inclusión.

```cpp
#pragma once

int sumaConsecutivosFor(int start, int end) {
    int res = 0;
    for (int i = start; i <= end; i++) {
        res += i;
    }
    return res;
}

int sumaConsecutivosFormula(int start, int end) {
    int n = (end - start) + 1;
    return (n * (start + end)) / 2;
}
```

Para utilizar estas funciones, simplemente debes importar el archivo de cabecera en tu archivo principal:

```cpp
#include "Funciones.h"
#include <iostream>

int main() {
    int resultado1 = sumaConsecutivosFor(1, 10);
    int resultado2 = sumaConsecutivosFormula(1, 10);

    std::cout << "Suma con bucle: " << resultado1 << std::endl;
    std::cout << "Suma con formula: " << resultado2 << std::endl;

    return 0;
}
```
