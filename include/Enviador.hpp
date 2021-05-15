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
		

};
#endif