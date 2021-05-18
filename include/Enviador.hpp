#ifndef ENVIADOR_H
#define ENVIADOR_H
#include <string>

using std::string;

	
class Enviador  {
	private:
		string nombre; 


	public:
		//Constructores
		Enviador();
		Enviador(string nombre);

		//Geteres
		string get_nombre_enviador() {return nombre;}

		//Seters
		void set_nombre(string nombre);
};
#endif