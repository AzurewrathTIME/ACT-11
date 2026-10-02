🎓 Sistema de Gestión de Alumnos en C++

¡Bienvenido al Sistema de Gestión de Alumnos! 👋
Este proyecto fue desarrollado en C++ utilizando programación orientada a objetos (POO) para administrar información de alumnos, materias y calificaciones. 📚💻

El programa funciona mediante un menú interactivo en consola, permitiendo registrar, consultar, modificar y eliminar alumnos, además de gestionar sus materias y calificaciones.

🚀 Características

El sistema cuenta con las siguientes funciones:

👨‍🎓 Registrar alumnos.

🔎 Buscar alumnos por nombre.

📋 Mostrar información de un alumno.

👥 Mostrar todos los alumnos registrados.

✏️ Modificar información de un alumno.

🗑️ Eliminar alumnos.

📊 Calcular el promedio general de los alumnos.

📚 Agregar materias a un alumno.

📝 Registrar calificaciones.

📖 Mostrar el historial académico de un alumno.

🚪 Salir del programa.

🧠 Conceptos utilizados

Este proyecto utiliza diferentes conceptos fundamentales de Programación Orientada a Objetos:

🏗️ Clases y objetos

🔒 Encapsulamiento

🧩 Constructores

🔧 Métodos set y get

📦 Arreglos de objetos

🔍 Búsqueda de elementos

🔄 Modificación y eliminación de registros

📊 Cálculos de promedios

💾 Manejo de información mediante arreglos

🏛️ Estructura del programa

El programa está compuesto principalmente por tres clases:

👤 Alumno

Esta clase representa a un estudiante y contiene:

Nombre

Edad

Promedio

Materias

Calificaciones

Número de materias

Número de calificaciones

También cuenta con métodos para agregar materias, registrar calificaciones, buscar materias y mostrar información.

📚 Materia

Representa una materia académica.

Sus atributos principales son:

nombre → Nombre de la materia.

clave → Clave identificadora de la materia.

Ejemplo:

Materia: Programacion | Clave: PROG01

📝 Calificacion

Representa una calificación relacionada con una materia.

Contiene:

claveMateria → Identifica la materia.

nota → Calificación obtenida.

Las calificaciones permitidas están dentro del rango:

0 - 10

📋 Menú principal

Al ejecutar el programa se muestra el siguiente menú:

===== MENU =====
1. Registrar Alumno.
2. Mostrar un Alumno.
3. Mostrar Todos los Alumnos.
4. Calcular Promedio.
5. Buscar Alumno por nombre.
6. Eliminar Alumno.
7. Modificar Alumno.
8. Agregar Materia.
9. Registrar Calificacion.
10. Mostrar Historial Academico.
11. Salir.


Cada opción permite realizar una operación diferente sobre los datos registrados.

💻 Ejemplo de uso
1️⃣ Registrar un alumno

El programa solicita:

Introduce el nombre: Juan
Introduce la edad: 20
Introduce el promedio: 9.2


Después muestra:

Alumno registrado.

2️⃣ Agregar una materia

Se puede asociar una materia al alumno:

Nombre de la materia: Programacion
Clave de la materia: PROG01


Resultado:

Materia agregada.

3️⃣ Registrar una calificación

Primero se solicita la clave de la materia:

Clave de la materia: PROG01
Nota: 9.5


Resultado:

Calificacion registrada.

4️⃣ Mostrar historial académico

El sistema relaciona las materias con sus respectivas calificaciones y muestra algo similar a:

Historial de Juan

Materia: Programacion | Clave: PROG01
  Nota: 9.5

Materia: Matematicas | Clave: MAT01
  Nota: 8.7

⚙️ Restricciones del sistema

Para mantener el programa sencillo y basado en arreglos, existen algunos límites:

👨‍🎓 Máximo 10 alumnos.

📚 Máximo 10 materias por alumno.

📝 Máximo 10 calificaciones por alumno.

📊 Las calificaciones deben estar entre 0 y 10.

🔑 Para registrar una calificación, la materia debe existir previamente.

La constante principal utilizada es:

const int MAX = 10;

🛠️ Requisitos

Para ejecutar el programa necesitas:

💻 Un compilador de C++.

🧰 GCC, MinGW, Visual Studio, Code::Blocks o cualquier IDE compatible.

📚 Soporte para C++ estándar.

▶️ Compilación y ejecución

Si estás utilizando g++, puedes compilar el programa con:

g++ main.cpp -o alumnos


Después ejecutarlo con:

Windows
alumnos.exe

Linux / macOS
./alumnos

📁 Estructura del proyecto

Una estructura sencilla podría ser:

SistemaAlumnos/
│
├── main.cpp
└── README.md


El archivo main.cpp contiene toda la implementación del sistema y README.md contiene la documentación del proyecto.

🧩 Funciones principales
Función	Descripción
registrarAlumno()	Registra un nuevo alumno
mostrarAlumno()	Muestra los datos de un alumno
mostrarTodos()	Muestra todos los alumnos
calcularPromedio()	Calcula el promedio general
buscarAlumno()	Busca un alumno por nombre
eliminarAlumno()	Elimina un alumno
modificarAlumno()	Modifica los datos de un alumno
agregarMateria()	Agrega una materia
registrarCalificacion()	Registra una calificación
mostrarHistorial()	Muestra el historial académico
buscarIndice()	Busca la posición de un alumno
🔐 Encapsulamiento

Los atributos de las clases se encuentran declarados como private, por lo que no pueden modificarse directamente desde fuera de la clase.

Por ejemplo:

class Materia {
private:
    string nombre;
    string clave;
};


Para acceder a estos datos se utilizan métodos set y get:

m.setNombre("Programacion");
m.setClave("PROG01");


Esto permite aplicar uno de los principios básicos de la programación orientada a objetos: el encapsulamiento 🔒.

🤖 Uso de IA

Este proyecto puede haber sido desarrollado con apoyo de herramientas de Inteligencia Artificial 🤖, utilizadas como asistencia para:

💡 Generar ideas para la estructura del programa.

🧠 Comprender conceptos de programación orientada a objetos.

🐛 Detectar y corregir posibles errores.

📖 Documentar el código.

✨ Mejorar la organización y presentación del proyecto.

La implementación y adaptación final del código corresponden al proyecto presentado.

📌 Posibles mejoras futuras

El proyecto puede ampliarse agregando nuevas funcionalidades, por ejemplo:

💾 Guardar los datos en archivos.

📂 Cargar automáticamente la información al iniciar.

🔐 Sistema de inicio de sesión.

🔎 Búsquedas más avanzadas.

📊 Reportes de calificaciones.

📈 Cálculo del promedio por materia.

🗃️ Uso de vector en lugar de arreglos estáticos.

🧱 Separar las clases en archivos .h y .cpp.

🖥️ Crear una interfaz gráfica.

🗄️ Conectar el sistema a una base de datos.

🎯 Objetivo del proyecto

El objetivo principal es poner en práctica los fundamentos de C++ y la Programación Orientada a Objetos, creando un sistema sencillo capaz de administrar alumnos, materias y calificaciones mediante una interfaz de consola.

👨‍💻 Tecnologías utilizadas

🟦 C++

💻 Programación Orientada a Objetos

🧮 Arreglos

🔤 string

📥 iostream

🛠️ Compilador C++

⭐ Conclusión

Este proyecto representa una implementación básica de un sistema académico utilizando C++, permitiendo practicar conceptos importantes como clases, objetos, encapsulamiento, constructores, métodos, arreglos y manejo de información.

Es una buena base para posteriormente desarrollar un sistema más completo utilizando archivos, bases de datos o interfaces gráficas. 🚀

🤖📚 ¡Gracias por revisar el proyecto!

Hecho con C++ 💻 + lógica 🧠 + un poco de IA 🤖 + muchas ganas de programar 🚀
