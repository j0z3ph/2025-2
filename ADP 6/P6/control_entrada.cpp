/**
 * @file control_entrada.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Programa que permite administrar la entrada y 
 * salida de personal y visitas para la empresa Microsoft
 * @version 0.1
 * @date 2025-06-18
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<iostream>

using namespace std;

typedef string String;

class Empleado {
    protected:
    String nombre;
    int idEmpleado;
    String cargo;
    String area;
    public:
    
    // Setters
    void setNombre(String nombre) { this->nombre = nombre; }
    void setIdEmpleado(int idEmpleado) { this->idEmpleado = idEmpleado; }
    void setCargo(String cargo) { this->cargo = cargo; }
    void setArea(String area) { this->area = area; }

    // Getters
    String getNombre() { return this->nombre; }
    int getIdEmpleado() { return this->idEmpleado; }
    String getCargo() { return this->cargo; }
    String getArea() { return this->area; }

};

class RegistroEmpleado : public Empleado {
    private:
    String firma;
    
    public:
    RegistroEmpleado(String nombre, 
        int idEmpleado, 
        String cargo, 
        String area,
        String firma) {
            this->nombre = nombre;
            this->area = area;
            this->cargo = cargo;
            this->idEmpleado = idEmpleado;
        }
};


int main()
{
    
    return 0;
}
