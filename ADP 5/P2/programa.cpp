/**
 * @file programa.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief 
 * @version 0.1
 * @date 2025-06-09
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<iostream>
#include "biblioteca.hpp"

using namespace std;

typedef string String;

class Fecha {
    private:
    int dia;
    int mes;
    int anio;
};


class Alumno {
    private:
    String nombre;
    String boleta;
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
    Alumno al1;

    
    al1.setNombre("Diego");
    
    cout << "La suma de 8 y 24 es " << suma(8.7f,24.1f, 0.4f, 6.7f) << endl;
    
    return 0;
}


