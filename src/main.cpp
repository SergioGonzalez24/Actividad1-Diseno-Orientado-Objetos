#include <iostream>
#include "../include/Destinatario.hpp"
#include "../include/Enviador.hpp"
#include "../include/Paquete.hpp"

using namespace std;

//Variables 
int seleccion;

//Codigo Principal
int main() {

    cout << "Hola y bienvendio a envia tu paquete" << endl;
    cout << "Seleccione la opcion que desea utilizar: \n 1-.Enviar Paquete \n 2-.Salir" << endl;

    do {

        cout << "Ingrese el numero de su seleccion: ";
        cin >> seleccion;

        if (seleccion == 1) {
            //codigo aqui.
            cout << "Funciona" << endl;
        }
        else if (seleccion == 2) {
            cout << "Gracias y Vuelva Pronto" << endl;
        }
        else {
            cout << "Valor no valido, Intente otra vez " << endl;
        }
    }
    while (seleccion != 2); 
    
    return 0;
}