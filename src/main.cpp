#include <iostream>
#include "../include/Funciones.hpp"

using namespace std;

//Variables 
int seleccion;

//Codigo Principal
int main() {

    cout << "Hola y bienvendio a envia tu paquete" << endl;

    do {

        cout << "Seleccione la opcion que desea utilizar: \n 1-.Enviar Paquete \n 2-.Salir" << endl;
        cout << "Ingrese el numero de su seleccion: ";
        cin >> seleccion;

        if (seleccion == 1) {
            cout << "¿Cunatos paquets va a enviar? ";
            int totPaq;
            cin >> totPaq;
            cout << endl;

            for (int i = 0; i <totPaq; i++) {
                enviarPaquete();
                
                efecto_carga(20, "Procesando", '*'); 
            }

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