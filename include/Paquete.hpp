#ifndef PAQUETE_H
#define PAQUETE_H
#include <string>

using std::string;

class Paquete  {
	private:
		string id;
		double peso;
		string fecha_envio;
		string fecha_entrega;
		string notas;

	public:
		//Constructores
		Paquete();
		Paquete(string id, double peso, string fecha_envio, string fecha_entrega, string notas);

		//Geters
		string get_id() {return id;}
		double get_peso() {return peso;}
		string get_fecha_envio() {return fecha_envio;}
		string get_fecha_entrega() {return fecha_entrega;}
		string get_notas() {return notas;}

		//Seters
		void set_id(string id);
		void set_peso(double peso);
		void set_fecha_envio(string fecha_envio);
		void set_fecha_entrega(string fecha_entrega);
		void set_notas(string notas);

};
#endif