# Ejercicio 1 — Básico

**Objetivo:** Manejar una sola clase y un arreglo de objetos.

**Clase:** `Persona`  
**Atributos:**

- `nombre` (string)
- `edad` (int)

**Instrucciones:**

1. Implementa los métodos `toJson()` y `fromJson()`.
2. En `main()`, crea un `std::vector<Persona>` y agrega **3 personas**.
3. Guarda el vector en `personas.json` y luego léelo para reconstruir el vector.
4. Muestra en consola los datos de todas las personas.

**Conceptos practicados:** Clases, vectores, JSON, archivos.

---

# Ejercicio 2 — Intermedio (Relación por ID)

**Objetivo:** Manejar más de una clase y relaciones **por ID**.

**Clases:**

1. `Persona`
   - `id` (int)
   - `nombre` (string)
   - `edad` (int)
   - `direccionId` (int) → referencia a `Direccion`
2. `Direccion`
   - `id` (int)
   - `calle` (string)
   - `ciudad` (string)
   - `codigoPostal` (string)

**Instrucciones:**

1. Cada `Persona` tiene un `direccionId` que apunta a un objeto `Direccion` guardado por separado.
2. En `main()`, crea vectores de `Persona` y `Direccion`.
3. Guarda ambos vectores en `personas.json` y `direcciones.json` por separado.
4. Lee los archivos y reconstruye los objetos, respetando la relación por ID.
5. Muestra en consola los datos de las personas y la calle de su dirección correspondiente (usando `direccionId`).

**Conceptos practicados:** Clases, relaciones por ID, JSON, vectores, archivos.

---

# Ejercicio 3 — Avanzado (Empresa con empleados por ID)

**Objetivo:** Manejar múltiples clases con relaciones por ID y colecciones de IDs.

**Clases:**

1. `Persona`
   - `id` (int)
   - `nombre` (string)
   - `edad` (int)
   - `direccionId` (int)
   - `telefonos` (vector<string>)
2. `Direccion`
   - `id` (int)
   - `calle` (string)
   - `ciudad` (string)
   - `codigoPostal` (string)
3. `Empresa`
   - `nombre` (string)
   - `empleadoIds` (vector<int>) → referencia a `Persona`

**Instrucciones:**

1. Crea vectores de `Persona`, `Direccion` y `Empresa`.
2. Cada `Empresa` contiene solo los IDs de sus empleados (`empleadoIds`).
3. Guarda cada vector en archivos JSON separados (`personas.json`, `direcciones.json`, `empresas.json`).
4. Lee los archivos y reconstruye los objetos, respetando las relaciones por ID.
5. Muestra en consola la información de la empresa y los nombres de sus empleados usando los IDs.

**Conceptos practicados:** Clases complejas, relaciones por ID, vectores dentro de objetos, JSON, archivos.
