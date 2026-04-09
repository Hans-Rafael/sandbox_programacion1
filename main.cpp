#include <iostream>
#include <cctype>
#include "tarea_1.h"
#include "tarea_2.h"
#include "tarea_3.h"
using namespace std;
int main() {
    char opcion;

    cout<< "============== Projecto de Tareas de programacion ===============\n";

    while (true) {
        cout << "\n1. Tarea 1 | 2. Tarea 2 |Tarea 3 | S. Salir\nOpcion: ";
        cin >> opcion;
        opcion = tolower(opcion);

        switch (opcion) {
            case '1': ejecutarTarea1(); break;
            case '2': ejecutarTarea2(); break;
            case '3': ejecutarTarea3(); break;
            case 's': cout << "Saliendo...\n"; return 0;
            default:  cout << "Opcion invalida. Intenta de nuevo.\n";
        }
        cout<< "\n-------------- Proxima Tarea -----------------\n";
    }
}
