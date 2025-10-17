#include <iostream>


using json = nlohmann::json;
using namespace std;

class Clientes {

	private:
		int id;
		string nombre;
		int edad;
		string correo;

	public:

		Clientes() {
			id = 0;
			nombre = "";
			edad = 0;
			correo = "";
		}

		Clientes(int id, string nombre, int edad, string correo) {
			this->id = id;
			this->nombre = nombre;
			this->edad = edad;
			this->correo = correo;
		}
		int getId() {
			return id;
		}
		string getNombre() {
			return nombre;
		}

		int getEdad() {
			return edad;
		}
		string getCorreo() {
			return correo;
		}

		void mostrar() {
			cout << "------------------------" << endl;
			cout << "ID: " << id << endl;
			cout << "Nombre: " << nombre << endl;
			cout << "Edad: " << edad << endl;
			cout << "Correo: " << correo << endl;
			cout << "------------------------" << endl;
			cout << endl;
		}


		static Clientes from_json(const json& j) {
			return { j.at("id"), j.at("nombre"), j.at("edad"), j.at("correo") };
		}
};