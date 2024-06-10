#include <iostream>
using namespace std;
int main (int argc, char *argv[])
{

    int e;

    int *puntero = &e;
    
        cout << "Ingerse su edad: ";
        cin >> *puntero;

        if (*puntero < 18)
        {
            cout << "Es menor de edad";
            cout << "Su edad es: " << e << endl;
            cout << "El espacio de memoria de la variable es: " << &puntero;
        }

        else 
        {
            cout << "Es mayor de edad";
            cout << "Su edad es: " << e  << endl;
            cout << "El espacio de memoria de la variable es: " << &puntero;
        }



    return 0;
}
