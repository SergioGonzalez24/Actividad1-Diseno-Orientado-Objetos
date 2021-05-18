#ifndef DESTINATARIO_H
#define DESTINATARIO_H

#include <string>

using std::string;
	
class Destinatario  {
	private:
		string nombre;
		string direccion; 
		
	public:
		//Constructor
		Destinatario();
		Destinatario(string nombre, string direccion);

		//Geters
		string get_nombre_destinatario() {return nombre;} 
		string get_direccion() {return direccion;}

		//Seters
		void set_nombre(string nombre);
		void set_direccion(string direccion);
};
#endif

