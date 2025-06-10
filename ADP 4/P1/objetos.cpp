/**
 * @file objetos.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi primera clase
 * @version 0.1
 * @date 2025-06-10
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<iostream>

using namespace std;

typedef string String;

class Fecha {
    private:
    int dia;
    int mes;
    int anio;
};


class Persona {
    private:
    String nombre;
    String curp;
    Fecha nacimiento;
    public:
    void setNombre(String nombre) {
        this->nombre = nombre;
    }
    String getNombre() {
        return this->nombre;
    }
};


int main()
{
    Persona raul;
    raul.setNombre("Raul");

    cout << raul.getNombre();
    
    
    return 0;
}
