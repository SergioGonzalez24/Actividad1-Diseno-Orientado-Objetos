#include "../include/Funciones.hpp"

#include <iostream>

#include <string>
#include <thread>
#include <chrono>
#include <cmath>

using namespace std;

void enviarPaquete() {

    char valor_correcto;
    string nombreEnviador;
    string nombreDestinatario;
    string direccion;
    string id;
    double peso;
    string fecha;
    string notas;

    do {
        cout << "Ingrese los siguietes datos: " << endl;

        cout << "De: ";
        cin >> nombreEnviador;
        cout << endl;
        

        cout << "Para: ";
        cin >> nombreDestinatario;
        cout << endl;

        cout <<"Direccion: ";
        cin >> direccion;
        cout << endl;

        cout << "id del paqute: ";
        cin >> id;
        cout << endl;

        cout << "Peso del paquete en kg: ";
        cin >> peso;
        cout << endl;

        cout << "Fecha de envio (d/m/a) :";
        cin >> fecha;
        cout << endl;

        cout << "Notas adicionales: ";
        cin >> notas;
        cout << endl;

        //Paquete paq1(nombreEnviador, nombreDestinatario, direccion, id, peso, fecha, notas);

        cout << endl;
        //paq1.print();
        cout << endl;

        cout << "Sus valores son correctos y/n? ";
        cin >> valor_correcto;
        cout << endl;

    }

    while (valor_correcto == 'n');


}

void efecto_carga(int time, const string message, char symbol) {

    string progress_bar;
    const double progress_level = 1.42;

    cout << message << "\n\n";

    for (double percentage = 0; percentage <= 100; percentage += progress_level) {
        progress_bar.insert(0, 1, symbol);
        cout << "\r [" << ceil(percentage) << '%' << "] " << progress_bar;
        this_thread::sleep_for(chrono::milliseconds(time));       
    }

    cout << "\n\n";
    cout << "¡Envio Procesado!";
    cout << "\n\n";
}


