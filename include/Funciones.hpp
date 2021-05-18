/*
Actividad Repaso OOP
Proyecto desarrollado por Sergio Gonzalez y Jorge Rojas

Definicion de funciones utilizadas en main

*/

//Codigo Funciones creado por Jorge Rojas

#ifndef FUNCIONES_H
#define FUNCIONES_H

#include "../include/Enviador.hpp"
#include "../include/Paquete.hpp"
#include "../include/Destinatario.hpp"

#include <iostream>

#include <string>
#include <thread>
#include <chrono>
#include <cmath>

using namespace std;

void enviarPaquete() {

    char valor_correcto;

    //do {
        cout << "Ingrese los siguietes datos: " << endl;

        cout << "De: ";
        string nombreEnviador;
        cin >> nombreEnviador;
        cout << endl;
        

        cout << "\n Para: ";
        string nombreDestinatario;
        cin >> nombreDestinatario;
        cout << endl;

        cout <<"Direccion: ";
        string direccion;
        cin >> direccion;
        cout << endl;

        cout << "id del paqute: ";
        string id;
        cin >> id;
        cout << endl;

        cout << "Peso del paquete en kg: ";
        double peso;
        cin >> peso;
        cout << endl;

        cout << "Fecha de envio (d/m/a) :";
        string fecha;
        cin >> fecha;
        cout << endl;

        cout << "Notas adicionales: ";
        string notas;
        cin >> notas;
        cout << endl;

        Paquete paq1(nombreEnviador, nombreDestinatario, direccion, id, peso, fecha, notas);

        cout << endl;
        paq1.print();
        cout << endl;

        cout << "Sus valores son correctos y/n? " << endl;
        cin >> valor_correcto;
        cout << endl;

    //}

    //while (valor_correcto == 'n');


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



#endif

