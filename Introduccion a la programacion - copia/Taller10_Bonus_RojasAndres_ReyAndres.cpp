#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

struct Paciente {
    string nombre;
    int edad;
    string enfermedad;
    string fechaIngreso;
};

Paciente pacientes[1000];
int numPacientes = 0;

void leerArchivo();
void buscarPaciente(string enfermedad);
void imprimirPacientes();
void agregarPaciente(Paciente p);
void actualizarArchivo();

int main() {
    leerArchivo();
    int opcion;
    do {
        cout << "\nMenu:\n";
        cout << "1. Buscar paciente por enfermedad\n";
        cout << "2. Imprimir todos los pacientes\n";
        cout << "3. Agregar un nuevo paciente\n";
        cout << "4. Actualizar archivo de pacientes\n";
        cout << "5. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cin.ignore(); // Para limpiar el buffer de entrada

        switch(opcion) {
            case 1: {
                string enfermedad;
                cout << "Ingrese la enfermedad en minuscula: ";
                getline(cin, enfermedad);
                buscarPaciente(enfermedad);
                break;
            }
            case 2:
                imprimirPacientes();
                break;
            case 3: {
                Paciente p;
                cout << "Ingrese el nombre del paciente: ";
                getline(cin, p.nombre);
                cout << "Ingrese la edad del paciente: ";
                cin >> p.edad;
                cin.ignore(); // Para limpiar el buffer de entrada
                cout << "Ingrese la enfermedad del paciente en minuscula: ";
                getline(cin, p.enfermedad);
                cout << "Ingrese la fecha de ingreso del paciente: ";
                getline(cin, p.fechaIngreso);
                agregarPaciente(p);
                break;
            }
            case 4:
                actualizarArchivo();
                break;
            case 5:
                break;
            default:
                cout << "Opcion invalida.\n";
        }
    } while (opcion != 5);

    return 0;
}

void leerArchivo() {
    ifstream archivo("pacientes.txt");
    string linea;
    while (getline(archivo, linea)) {
        stringstream ss(linea);
        getline(ss, pacientes[numPacientes].nombre, ',');
        string edad; getline(ss, edad, ','); pacientes[numPacientes].edad = stoi(edad);
        getline(ss, pacientes[numPacientes].enfermedad, ',');
        getline(ss, pacientes[numPacientes].fechaIngreso, ',');
        numPacientes++;
    }
    archivo.close();
}

void buscarPaciente(string enfermedad) {
    bool encontrado = false;
    for (int i = 0; i < numPacientes; i++) {
        if (pacientes[i].enfermedad == enfermedad) {
            cout << pacientes[i].nombre << ", " << pacientes[i].edad << " " "años" ", "
                 << pacientes[i].enfermedad << ", " << pacientes[i].fechaIngreso << endl;
            encontrado = true;
        }
    }
    if (!encontrado) {
        cout << "No hay pacientes con la enfermedad: " << enfermedad << endl;
    }
}

void imprimirPacientes() {
    for (int i = 0; i < numPacientes; i++) {
        cout << pacientes[i].nombre << ", " << pacientes[i].edad << " " "años" ", "
             << pacientes[i].enfermedad << ", " << pacientes[i].fechaIngreso << endl;
    }
}

void agregarPaciente(Paciente p) {
    pacientes[numPacientes] = p;
    numPacientes++;
    cout << "Paciente agregado.\n";
}

void actualizarArchivo() {
    ofstream archivo("pacientes.txt");
    for (int i = 0; i < numPacientes; i++) {
        archivo << pacientes[i].nombre << "," << pacientes[i].edad << ","
                << pacientes[i].enfermedad << "," << pacientes[i].fechaIngreso << endl;
    }
    archivo.close();
    cout << "Archivo actualizado.\n";
}
