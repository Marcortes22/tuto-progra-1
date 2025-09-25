# Ejercicios de Programación Orientada a Objetos (POO) en C++

---

## Ejercicio 1 – Clase Lampara Inteligente

**Objetivo:** Practicar estados booleanos y lógica condicional.

**Instrucciones:**

1. Crear la clase `Lampara` con atributos privados:

   - `bool encendida`
   - `int nivelBrillo` (0–100)

2. Métodos:

   - Constructor que inicializa apagada y en brillo 50.
   - `void Encender()` → enciende la lámpara.
   - `void Apagar()` → apaga la lámpara.
   - `void AjustarBrillo(int nivel)` → cambia el brillo solo si está encendida y el valor está entre 0 y 100.
   - `void Mostrar()` → muestra si está encendida y el nivel de brillo.

3. En `main.cpp`, crear una lámpara, probar encender, apagar y cambiar brillo.

---

## 🕒 Ejercicio 2 – Clase Reloj

**Objetivo:** Practicar validaciones de rango y métodos de incremento.

**Instrucciones:**

1. Crear la clase `Reloj` con atributos privados:

   - `int hora` (0–23)
   - `int minuto` (0–59)

2. Métodos:

   - Constructor que recibe `hora` y `minuto`, validando rangos.
   - `void AvanzarMinuto()` → suma un minuto y ajusta la hora si pasa de 59.
   - `void AvanzarHora()` → suma una hora y reinicia si pasa de 23.
   - `void Mostrar()` → muestra la hora en formato HH:MM.

3. En `main.cpp`, crear un reloj y probar incrementos de hora y minuto.

---

## 📚 Ejercicio 3 – Clase Biblioteca y Libro (con `vector`)

**Objetivo:** Practicar composición y colecciones.

**Instrucciones:**

1. Clase `Libro`:

   - Atributos: `string titulo`, `string autor`, `bool prestado`.
   - Métodos: `Prestar()`, `Devolver()`, `Mostrar()`.

2. Clase `Biblioteca`:

   - Atributos: `string nombre`, `vector<Libro> libros`.
   - Métodos: `AgregarLibro()`, `MostrarLibros()`.

3. En `main.cpp`:
   - Crear una biblioteca.
   - Agregar libros.
   - Prestar y devolver algunos.
   - Mostrar estado final.

---
