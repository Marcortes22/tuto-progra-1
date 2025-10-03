#include <fstream>
#include <iostream>
#include "Clientes.h"
#include <string>
#include <nlohmann/json.hpp>
using namespace std;
using json = nlohmann::json;

int main()
{
	Clientes contenedorClientes[3];
	

	ifstream f("prueba.json");

	json data = json::parse(f);

	data["clientes"][0]["id"] = 30;


	/*const auto& clientes = data["clientes"];

	for (int i = 0; i < clientes.size(); ++i) {

		int id = clientes[i]["id"];
		string nombre = clientes[i]["nombre"];
		int edad = clientes[i]["edad"];
		string correo = clientes[i]["correo"];
		contenedorClientes[i] = Clientes(id, nombre, edad, correo);
	}

	f.close();



	for(int i = 0; i < clientes.size(); ++i) {
		
			contenedorClientes[i].mostrar();
		
	}*/


	return 0;
}
