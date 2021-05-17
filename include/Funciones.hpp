#ifndef FUNCIONES_H
#define FUNCIONES_H

#include "../include/Enviador.hpp"
#include "../include/Paquete.hpp"
#include "../include/Destinatario.hpp"

#include <iostream>

#include <string>

using namespace std;

void enviarPaquete() {

    cout << "Ingrese los siguietes datos: " << endl;

    cout << "De: ";
    string nombreEnviador;
    cin >> nombreEnviador;

    cout << "\n Para: ";
    string nombreDestinatario;
    cin >> nombreDestinatario;

    cout <<"\n Direccion: ";
    string direccion;
    cin >> direccion;

    cout << "\n id del paqute: ";
    string id;
    cin >> id;

    cout << "\n Peso del paquete: ";
    double peso;
    cin >> peso;

    cout << "\n Fecha de envio:";
    string fecha;
    cin >> fecha;

    cout << "\n Notas adicionales: ";
    string notas;
    cin >> notas;

    Paquete paq1(nombreEnviador,nombreDestinatario,direccion,id,peso,fecha,notas);

    cout << endl;
    paq1.print();
}
/*
void efecto_carga() {

}
*/
#endif

