#include <iostream>
#include <string>
#include "../include/Enviador.hpp"  

using std::string;

//Constructor
Enviador::Enviador() {
    nombre = "";
    id_sucursal = "0000"; 
}

//Seters

void Enviador::set_nombre(string nombre) {
    this-> nombre = nombre;
}
void Enviador::set_id_sucursal(string id) {
    this-> id_sucursal = id;
}
