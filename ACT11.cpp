#include <iostream>
#include <string>

using namespace std;

const int MAX = 10;

class Materia {
private:
    string nombre;
    string clave;

public:
    Materia() {
        nombre = "";
        clave = "";
    }

    void setNombre(string n) {
        nombre = n;
    }

    string getNombre() {
        return nombre;
    }

    void setClave(string c) {
        clave = c;
    }

    string getClave() {
        return clave;
    }

    void mostrar() {
        cout << "Materia: " << nombre << " | Clave: " << clave << endl;
    }
};

class Calificacion {
private:
    string claveMateria;
    float nota;

public:
    Calificacion() {
        claveMateria = "";
        nota = 0.0;
    }

    void setClaveMateria(string c) {
        claveMateria = c;
    }

    string getClaveMateria() {
        return claveMateria;
    }

    void setNota(float n) {
        if (n >= 0 && n <= 10) {
            nota = n;
        }
    }

    float getNota() {
        return nota;
    }

    void mostrar() {
        cout << "Clave Materia: " << claveMateria << " | Nota: " << nota << endl;
    }
};

class Alumno {
private:
    string nombre;
    int edad;
    float promedio;
    Materia materias[10];
    Calificacion calificaciones[10];
    int numMaterias;
    int numCalificaciones;

public:
    Alumno() {
        nombre = "";
        edad = 0;
        promedio = 0.0;
        numMaterias = 0;
        numCalificaciones = 0;
        cout << "Alumno creado" << endl;
    }

    Alumno(string n, int e, float p) {
        nombre = n;
        edad = e;
        promedio = p;
        numMaterias = 0;
        numCalificaciones = 0;
        cout << "Alumno creado" << endl;
    }

    void setNombre(string n) {
        nombre = n;
    }

    string getNombre() {
        return nombre;
    }

    void setEdad(int e) {
        if (e >= 0) {
            edad = e;
        }
    }

    int getEdad() {
        return edad;
    }

    void setPromedio(float p) {
        if (p >= 0 && p <= 10) {
            promedio = p;
        }
    }

    float getPromedio() {
        return promedio;
    }

    int getNumMaterias() {
        return numMaterias;
    }

    int getNumCalificaciones() {
        return numCalificaciones;
    }

    void agregarMateria(Materia m) {
        if (numMaterias < 10) {
            materias[numMaterias] = m;
            numMaterias++;
        }
    }

    Materia getMateria(int i) {
        return materias[i];
    }

    void registrarCalificacion(Calificacion c) {
        if (numCalificaciones < 10) {
            calificaciones[numCalificaciones] = c;
            numCalificaciones++;
        }
    }

    Calificacion getCalificacion(int i) {
        return calificaciones[i];
    }

    int buscarMateria(string clave) {
        for (int i = 0; i < numMaterias; i++) {
            if (materias[i].getClave() == clave) {
                return i;
            }
        }
        return -1;
    }

    void mostrar() {
        cout << "Estudiante: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "Promedio: " << promedio << endl;
    }

    ~Alumno() {
        cout << "Alumno destruido" << endl;
    }
};

Alumno alumnos[MAX];
int cantidad = 0;

void registrarAlumno() {
    if (cantidad >= MAX) {
        cout << "No hay espacio para mas alumnos." << endl;
        return;
    }
    string n;
    int e;
    float p;

    cout << "Alumno " << cantidad + 1 << ":" << endl;
    cout << "Introduce el nombre: ";
    cin >> n;
    cout << "Introduce la edad: ";
    cin >> e;
    cout << "Introduce el promedio: ";
    cin >> p;

    alumnos[cantidad].setNombre(n);
    alumnos[cantidad].setEdad(e);
    alumnos[cantidad].setPromedio(p);

    cantidad++;
    cout << "Alumno registrado." << endl;
}

void mostrarAlumno() {
    if (cantidad == 0) {
        cout << "No hay alumnos registrados." << endl;
        return;
    }
    int indice;
    cout << "Ingrese el indice del alumno (1 a " << cantidad << "): ";
    cin >> indice;
    if (indice < 1 || indice > cantidad) {
        cout << "Indice invalido." << endl;
        return;
    }
    alumnos[indice - 1].mostrar();
}

void mostrarTodos() {
    if (cantidad == 0) {
        cout << "No hay alumnos registrados." << endl;
        return;
    }
    for (int i = 0; i < cantidad; i++) {
        alumnos[i].mostrar();
        cout << "---------------------" << endl;
    }
}

void calcularPromedio() {
    if (cantidad == 0) {
        cout << "No hay alumnos registrados." << endl;
        return;
    }
    double suma = 0;
    for (int i = 0; i < cantidad; i++) {
        suma += alumnos[i].getPromedio();
    }
    double promedio = suma / cantidad;
    cout << "Promedio general: " << promedio << endl;
}

int buscarIndice(string nombre) {
    for (int i = 0; i < cantidad; i++) {
        if (alumnos[i].getNombre() == nombre) {
            return i;
        }
    }
    return -1;
}

void buscarAlumno() {
    if (cantidad == 0) {
        cout << "No hay alumnos registrados." << endl;
        return;
    }
    string buscar;
    cout << "Introduce el nombre del alumno a buscar: ";
    cin >> buscar;

    int indice = buscarIndice(buscar);

    if (indice != -1) {
        cout << "Alumno encontrado en la posicion " << indice + 1 << ":" << endl;
        alumnos[indice].mostrar();
    } else {
        cout << "Alumno no encontrado." << endl;
    }
}

void eliminarAlumno() {
    if (cantidad == 0) {
        cout << "No hay alumnos registrados." << endl;
        return;
    }
    string buscar;
    cout << "Introduce el nombre del alumno a eliminar: ";
    cin >> buscar;

    int indice = buscarIndice(buscar);

    if (indice == -1) {
        cout << "Alumno no encontrado." << endl;
        return;
    }

    for (int i = indice; i < cantidad - 1; i++) {
        alumnos[i] = alumnos[i + 1];
    }
    cantidad--;
    cout << "Alumno eliminado." << endl;
}

void modificarAlumno() {
    if (cantidad == 0) {
        cout << "No hay alumnos registrados." << endl;
        return;
    }
    string buscar;
    cout << "Introduce el nombre del alumno a modificar: ";
    cin >> buscar;

    int indice = buscarIndice(buscar);

    if (indice == -1) {
        cout << "Alumno no encontrado." << endl;
        return;
    }

    string n;
    int e;
    float p;

    cout << "Nuevo nombre: ";
    cin >> n;
    cout << "Nueva edad: ";
    cin >> e;
    cout << "Nuevo promedio: ";
    cin >> p;

    alumnos[indice].setNombre(n);
    alumnos[indice].setEdad(e);
    alumnos[indice].setPromedio(p);

    cout << "Alumno modificado." << endl;
}

void agregarMateria() {
    if (cantidad == 0) {
        cout << "No hay alumnos registrados." << endl;
        return;
    }
    string buscar;
    cout << "Nombre del alumno: ";
    cin >> buscar;

    int indice = buscarIndice(buscar);

    if (indice == -1) {
        cout << "Alumno no encontrado." << endl;
        return;
    }

    if (alumnos[indice].getNumMaterias() >= 10) {
        cout << "No hay espacio para mas materias." << endl;
        return;
    }

    string nombreMateria;
    string clave;

    cout << "Nombre de la materia: ";
    cin >> nombreMateria;
    cout << "Clave de la materia: ";
    cin >> clave;

    Materia m;
    m.setNombre(nombreMateria);
    m.setClave(clave);

    alumnos[indice].agregarMateria(m);
    cout << "Materia agregada." << endl;
}

void registrarCalificacion() {
    if (cantidad == 0) {
        cout << "No hay alumnos registrados." << endl;
        return;
    }
    string buscar;
    cout << "Nombre del alumno: ";
    cin >> buscar;

    int indice = buscarIndice(buscar);

    if (indice == -1) {
        cout << "Alumno no encontrado." << endl;
        return;
    }

    if (alumnos[indice].getNumCalificaciones() >= 10) {
        cout << "No hay espacio para mas calificaciones." << endl;
        return;
    }

    string clave;
    float nota;

    cout << "Clave de la materia: ";
    cin >> clave;

    if (alumnos[indice].buscarMateria(clave) == -1) {
        cout << "La materia no existe." << endl;
        return;
    }

    cout << "Nota: ";
    cin >> nota;

    Calificacion c;
    c.setClaveMateria(clave);
    c.setNota(nota);

    alumnos[indice].registrarCalificacion(c);
    cout << "Calificacion registrada." << endl;
}

void mostrarHistorial() {
    if (cantidad == 0) {
        cout << "No hay alumnos registrados." << endl;
        return;
    }
    string buscar;
    cout << "Nombre del alumno: ";
    cin >> buscar;

    int indice = buscarIndice(buscar);

    if (indice == -1) {
        cout << "Alumno no encontrado." << endl;
        return;
    }

    cout << "Historial de " << alumnos[indice].getNombre() << endl;

    for (int i = 0; i < alumnos[indice].getNumMaterias(); i++) {
        Materia m = alumnos[indice].getMateria(i);
        cout << "Materia: " << m.getNombre() << " | Clave: " << m.getClave() << endl;

        for (int j = 0; j < alumnos[indice].getNumCalificaciones(); j++) {
            Calificacion c = alumnos[indice].getCalificacion(j);
            if (c.getClaveMateria() == m.getClave()) {
                cout << "  Nota: " << c.getNota() << endl;
            }
        }
    }
}

void menu() {
    int opcion;
    do {
        cout << "\n===== MENU =====" << endl;
        cout << "1. Registrar Alumno." << endl;
        cout << "2. Mostrar un Alumno." << endl;
        cout << "3. Mostrar Todos los Alumnos." << endl;
        cout << "4. Calcular Promedio." << endl;
        cout << "5. Buscar Alumno por nombre." << endl;
        cout << "6. Eliminar Alumno." << endl;
        cout << "7. Modificar Alumno." << endl;
        cout << "8. Agregar Materia." << endl;
        cout << "9. Registrar Calificacion." << endl;
        cout << "10. Mostrar Historial Academico." << endl;
        cout << "11. Salir." << endl;
        cout << "Opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            registrarAlumno();
        } else if (opcion == 2) {
            mostrarAlumno();
        } else if (opcion == 3) {
            mostrarTodos();
        } else if (opcion == 4) {
            calcularPromedio();
        } else if (opcion == 5) {
            buscarAlumno();
        } else if (opcion == 6) {
            eliminarAlumno();
        } else if (opcion == 7) {
            modificarAlumno();
        } else if (opcion == 8) {
            agregarMateria();
        } else if (opcion == 9) {
            registrarCalificacion();
        } else if (opcion == 10) {
            mostrarHistorial();
        } else if (opcion == 11) {
            cout << "Saliendo del programa." << endl;
        } else {
            cout << "Opcion no valida." << endl;
        }
    } while (opcion != 11);
}

int main() {
    menu();
    return 0;
}