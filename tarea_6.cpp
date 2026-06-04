#include <iostream>
#include "tarea_6.h"
using namespace std;

void ejecutarTarea6()
{ // Factorial de un numero
    char cent = 'n';
    int num;
    while (cent != 's' && cent != 'S')
    {
        long long fact = 1;
        cout << "Ingrese un numero al que desea sacar factorial: ";
        cin >> num;
        if (num < 0)
        {
            cout << "No existe el factorial para un numero negativo, intente de nuevo." << endl;
        }
        else
        {
            while (num > 0)
            {
                fact = fact * num;
                num--;
            }
            cout << "Factorial: " << fact << endl;
        }
    }
    cout << "¿Desea salir? (s/n): ";
    cin >> cent;
    /**
    // Función recursiva
    long long factorial(int n) {
        if (n <= 1) return 1; // Caso base: factorial de 0 o 1 es 1
        return n * factorial(n - 1); // Caso recursivo
    }
     */
}
// int main()
// {
//     ejecutarTarea6();
//     return 0;
// }
