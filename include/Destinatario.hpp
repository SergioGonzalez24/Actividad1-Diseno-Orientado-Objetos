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

		//Geters
		string get_nombre() {return nombre;} 
		string get_direccion() {return direccion;}

		//Seters
		void set_nombre(string nombre);
		void set_direccion(string direccion);
};
#endif

