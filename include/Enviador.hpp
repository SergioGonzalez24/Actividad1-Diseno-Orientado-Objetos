#ifndef ENVIADOR_H
#define ENVIADOR_H
#include <string>

using std::string;

	
class Enviador  {
	private:
		string nombre;
		string id_sucursal; 


	public:
		//Constructores
		Enviador();
		

		//Geteres
		string get_nombre() {return nombre;}
		string get_id_sucursal() {return id_sucursal;}

		//Seters
		void set_nombre(string nombre);
		void set_id_sucursal(string id_sucursal);
};
#endif