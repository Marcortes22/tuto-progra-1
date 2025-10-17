#include <fstream>
#include <iostream>
#include "Clientes.h"
#include <string>
#include <direct.h> 
#include <nlohmann/json.hpp>
using namespace std;
using json = nlohmann::json;

json read_json_file(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        // Mostrar el directorio actual para ayudar a depurar
        char cwd[1024];
        if (_getcwd(cwd, sizeof(cwd)) != nullptr) {
            std::cerr << "Directorio de trabajo actual: " << cwd << std::endl;
        }
        std::cerr << "Error: No se pudo abrir el archivo " << filename << std::endl;
        return json::array();
    }
    json data;
    file >> data;
    return data;
}

int main()
{

    vector<Clientes> vectorClientes;

 
    for (const auto& jobject : read_json_file("prueba.json")) {//read_json_file("campuses.json")
        vectorClientes.push_back(Clientes::from_json(jobject));
    }

	return 0;
}
