#include <iostream>
#include <cctype>
#include "tarea_1.h"
#include "tarea_2.h"
#include "tarea_3.h"
#include "tarea_4.h"
// #include "tarea_5.h" // Tarea 5 en progreso, se comenta para evitar errores de compilacion
using namespace std;
int main()
{
    char opcion;

    cout << "============== Projecto de Tareas de programacion ===============\n";

    while (true)
    {
        cout << "\n1. Tarea 1 | 2. Tarea 2 | 3. Tarea 3 | 4. Tarea 4 | 5. Tarea 5 | S. Salir\nOpcion: ";
        cin >> opcion;
        opcion = tolower(opcion);

        switch (opcion)
        {
        case '1':
            ejecutarTarea1();
            break;
        case '2':
            ejecutarTarea2();
            break;
        case '3':
            ejecutarTarea3();
            break;
        case '4':
            ejecutarTarea4();
            break;
        // case '5':
           // ejecutarTarea5();
           // break;
        case 's':
            cout << "Saliendo...\n";
            return 0;
        default:
            cout << "Opcion invalida. Intenta de nuevo.\n";
        }
        cout << "\n-------------- Proxima Tarea -----------------\n";
    }
}
