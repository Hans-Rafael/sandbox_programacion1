#include <iostream>
#include "tarea_1.h"
#include <string> // Para usar string y stof
#include <cctype> // para usar isdigit

using namespace std;
// la funcion
void ejecutarTarea1()
{

    string entrada;
    float a = -1;
    bool aux_a = true;
    bool aux_b = true, aux_c = true;
    float b, c;
    while (aux_a)
    {
        cout << "ingrese valor del cateto A ò 's' para salir: ";
        cin >> entrada;
        if (entrada == "s" || entrada == "S")
        {
            cout << "Gracias por usar el programa" << endl;
            return;
        }
        else if (isdigit(entrada[0]))
        {
            // si es true convierto texto a numero
            a = stof(entrada);
            if (a > 0)
            {
                cout << "gracias por ingresar primer cateto: " << a << endl;
                aux_a = false;
            }
            else
            {
                cout << "Debe ser un numero mayor a cero";
            }
        }
        else
        {
            cout << "Error: Ingreso letras o un valor invalido. Reintente." << endl;
        }
    }
    while (aux_b)
    {
        cout << "ingrese el valor del otro cateto: ";
        cin >> entrada;
        if (entrada == "s" || entrada == "S")
        {
            cout << "Gracias por usar el programa" << endl;
            return;
        }
        else if (isdigit(entrada[0]))
        {
            // si es un digito lo convierto a numero
            b = stof(entrada);
            if (b > 0)
            {
                cout << "segundo cateto fue:" << b << endl;
                aux_b = false;
            }
            else
            {
                cout << "El numero debe se mayor a cero" << endl;
            }
        }
        else
        {
            cout << "ERROR: Ingreso un caracter inadecuado, debe ser un numero" << endl;
        }
    }
    while (aux_c)
    {
        cout << "ingrese el valor del otro cateto: ";
        cin >> entrada;
        if (entrada == "s" || entrada == "S")
        {
            cout << "Gracias por usar el programa";
            return;
        }
        else if (isdigit(entrada[0]))
        {
            // si es un digito lo convierto a numero
            c = stof(entrada);
            if (c > 0)
            {
                cout << "Tercer cateto fue:" << c << endl;
                aux_c = false;
            }
            else
            {
                cout << "El numero debe se mayor a cero" << endl;
            }
        }
        else
        {
            cout << "ERROR: Ingreso un caracter inadecuado, debe ser un numero" << endl;
        }
    }
    if (a != b && a != c && b != c)
    {
        cout << "Tiene un triangulo ** Escaleno **" << endl;
    }
    else if (a == b && a == c)
    {
        cout << "Tienes un triangulo ** Equilatero ** " << endl;
    }
    else
    {
        cout << " Estamos en la presencia de un triangulo ** Isoceles **" << endl;
    }
}

