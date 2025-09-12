# Ejercicios de Programación Orientada a Objetos (POO) en C++

A diferencia de los anteriores, aquí **toda la lógica está dentro de las clases** (no hay funciones externas).

---

## Ejercicio 1 – Clase CuentaBancaria

**Objetivo:** Practicar encapsulación y lógica básica en métodos.

**Instrucciones:**

1. Crear una clase `CuentaBancaria` con los atributos privados:
   - `string numeroCuenta`
   - `string titular`
   - `float saldo`
2. Implementar un **constructor** que inicialice los atributos.
3. Implementar métodos:
   - `void Depositar(float monto)` → Aumenta el saldo.
   - `bool Retirar(float monto)` → Disminuye el saldo solo si hay suficiente dinero. Retorna `true` o `false`.
   - `void Mostrar()` → Muestra los datos de la cuenta.
4. En `main.cpp`:
   - Crear un objeto `CuentaBancaria`.
   - Probar depósitos y retiros.
   - Mostrar el estado de la cuenta.

---

## Ejercicio 2 – Clase Vehiculo y Carro

**Objetivo:** Practicar herencia y métodos con cálculos.

**Instrucciones:**

1. Crear una clase base `Vehiculo` con atributos:
   - `string marca`
   - `string modelo`
   - `int año`
   - `float precio`
2. Métodos:
   - `virtual void Mostrar()` → Muestra la información básica.
   - `int CalcularAntiguedad(int añoActual)` → Retorna los años transcurridos desde su fabricación.
3. Crear una clase `Carro` que herede de `Vehiculo` y agregue:
   - `int kilometraje`
4. Métodos:
   - Sobreescribir `Mostrar()` para incluir kilometraje.
   - `float CalcularDepreciacion()` → Retorna el valor depreciado según años y kilometraje.
5. En `main.cpp`:
   - Crear un objeto `Carro`.
   - Mostrar sus datos.
   - Calcular y mostrar la depreciación.

---

## Ejercicio 3 – Clase Tienda y Producto

**Objetivo:** Manejar colecciones dentro de una clase y aplicar lógica interna.

**Instrucciones:**

1. Crear una clase `Producto` con:
   - `string nombre`
   - `float precio`
   - `int stock`
   - Método `Mostrar()`.
2. Crear una clase `Tienda` que contenga:
   - `string nombreTienda`
   - `vector<Producto> productos`
3. Métodos de `Tienda`:
   - `void AgregarProducto(Producto p)`
   - `bool VenderProducto(string nombre, int cantidad)` → Verifica stock y descuenta.
   - `void MostrarInventario()`
   - `float CalcularValorInventario()` → Retorna la suma `precio * stock` de todos los productos.
4. En `main.cpp`:
   - Crear una tienda con varios productos.
   - Mostrar inventario.
   - Realizar una venta.
   - Calcular el valor total del inventario.
