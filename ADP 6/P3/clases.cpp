/**
 * @file clases.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi primer clase
 * @version 0.1
 * @date 2025-06-09
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <iostream>

using namespace std;

typedef string String;


class Fecha {
    public:
    int dia;
    int mes;
    int anio;
};

class Contacto
{
    private:
    String nombre;
    String numero;
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
    Contacto c;
    c.setNombre("Jose Luis");
    
    return 0;
}
