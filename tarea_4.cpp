#include <iostream>
#include "tarea_4.h"
using namespace std;

void ejecutarTarea4()
{
    int temp;

    cout << "Ingrese la temperatura: ";
    cin >> temp;

    if (temp < 0) {
        cout << "Bajo cero\n";
    } else if (temp <= 15) {
        cout << "Frio\n";
    } else if (temp <= 25) {
        cout << "Templado\n";
    } else if (temp <= 35) {
        cout << "Caluroso\n";
    } else {
        cout << "Muy caluroso\n";
    }
}