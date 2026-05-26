# 📊 Práctica de Laboratorio: Sistema de Gestión y Análisis de Calificaciones

¡Bienvenido al repositorio de la práctica de laboratorio! Este proyecto consiste en el desarrollo de un sistema automatizado de escritorio.

## 📝 Descripción del Proyecto

El objetivo principal de este proyecto es simular el rol de un ingeniero de software al que se le ha encomendado construir un programa para procesar las calificaciones del examen final de un grupo de estudiantes. Este sistema debe recopilar los datos, generar un reporte estadístico detallado sobre el rendimiento del curso y permitir la búsqueda inmediata de información.

## ⚙️ Requerimientos del Sistema

El programa está diseñado para cumplir con las siguientes funciones base:

| Funcionalidad | Descripción |
| :--- | :--- |
| **1. Registrar Calificaciones** | Permite ingresar los datos al sistema. |
| **2. Mostrar Reporte Estadístico** | • Calcula el promedio general de calificaciones de todo el grupo.<br>• Muestra el número total de alumnos aprobados (nota mayor o igual a 7).<br>• Muestra el número total de alumnos reprobados (nota menor a 7). |
| **3. Buscar Estudiante** | Utiliza una búsqueda secuencial:<br>• **Éxito:** Si lo encuentra, muestra su nombre, su nota y un mensaje indicando si está "Aprobado" o "Reprobado".<br>• **Error:** Si no lo encuentra, muestra un mensaje claro de error (ej. "El estudiante [Nombre] no se encuentra registrado"). |

## 🛠️ Funcionalidades Clave y Técnicas

* **👥 Correspondencia Indexada:** Vinculación exacta de nombres y notas sin necesidad de usar programación orientada a objetos (POO).
* **🎯 Validación de Datos:** Control estricto de rangos para calificaciones mediante bucles repetitivos (rango válido de **0.0** a **10.0**).
* **📊 Filtro de Rendimiento:** Clasificación en tiempo real de alumnos Aprobados (≥7.0) y Reprobados (<7.0).
* **🔍 Módulo de Consulta:** Algoritmo de Búsqueda Lineal ($\mathcal{O}(n)$) para localizar la nota exacta de un alumno ingresando únicamente su nombre.
* **🔄 Enfoque Comparativo:** Lógica idéntica distribuida en dos arquitecturas de memoria distintas (Stack en C++ y Heap en Java).

## 💻 Tecnologías Utilizadas

* **C++** (Implementación en Stack)
* **Java** (Implementación en Heap)
* **Visual Studio Code** (Entorno de Desarrollo)

## 📁 Estructura del Repositorio

* `/src_cpp`: Contiene el código fuente ejecutable con extensión `.cpp`.
* `/src_java`: Contiene la clase principal con extensión `.java`.
* `README.md`: Documentación interactiva del proyecto con guías de uso.

## 📂 Entregables de la Práctica

Para completar exitosamente esta práctica, se han desarrollado los siguientes elementos:

* **Ejercicio Práctico**: La resolución completa del Sistema de Gestión y Análisis de Calificaciones.
* **Documentación Técnica**: Inclusión de todos los pasos de la ingeniería de software: análisis, algoritmo, pseudocódigo, diagrama de flujo y sus respectivas pruebas de escritorio.
* **Código Fuente**: Codificación del programa desarrollada en C++ y Java.
* **Material Gráfico**: Recurso visual (infografía/afiche) que explica de forma clara y breve el funcionamiento y propósito del programa.

---

## ⚙️ Instrucciones de Ejecución en Visual Studio Code

### 🔹 1. Entorno de Ejecución en C++

1. Abre el archivo con extensión `.cpp` en tu editor de código.
2. Asegúrate de contar con la extensión **C/C++ de Microsoft** instalada en Visual Studio Code.
3. Abre la terminal integrada (`Ctrl + Ñ`) y compila el archivo fuente con el comando:
```bash
g++ -o sistema_notas principal.cpp

```


4. Ejecuta el archivo compilado desde la terminal (ej. `./sistema_notas` en Linux/Mac o `.\sistema_notas.exe` en Windows).
