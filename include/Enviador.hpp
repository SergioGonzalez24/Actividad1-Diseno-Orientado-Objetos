#ifndef ENVIADOR_H
#define ENVIADOR_H
#include <string>

using std::string;

	
class Enviador  {
	private:
		string nombre;
		int id_sucursal;
		string fecha_envio;

	public:
		//Constructores
		Enviador();
		Enviador(string nombre, int id_sucursal, string fecha_envio);

		//Geteres
		string get_nombre() {return nombre;}
		int get_id_sucursal() {return id_sucursal;}
		string get_fecha_envio() {return fecha_envio;}

		//Seters
		void set_nombre(string nombre);
		void set_id_sucursal(string id_sucursal);
		void set_fecha_env(string fecha_envio);
};
#endif