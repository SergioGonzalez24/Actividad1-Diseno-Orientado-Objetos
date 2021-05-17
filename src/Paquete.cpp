#include <iostream>
#include "../include/Paquete.hpp"
#include <string>

using std::string;

Paquete::Paquete() {
	id = "0000";
    peso = 0;
    fecha_envio = "";
    fecha_entrega = "";
    notas = "";
}

void Paquete::set_id(string id) {
    this-> id = id;
}

void Paquete::set_peso(double peso) {
    this-> peso = peso;
}

void Paquete::set_fecha_envio(string fecha_envio) {
    this-> fecha_envio = fecha_envio;
}

void Paquete::set_fecha_entrega(string fecha_entrega) {
    this-> fecha_entrega = fecha_entrega;
}

void Paquete::set_notas(string notas) {
    this-> notas = notas;
}


