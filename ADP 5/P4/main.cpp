/**
 * @file main.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief 
 * @version 0.1
 * @date 2025-06-16
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<iostream>

using namespace std;

class Figura
{

protected:
    int base;
    int altura;

public:
    
    // Setters
    void setBase(int base) { this->base = base; }
    void setAltura(int altura) { this->altura = altura; }

    // Getters
    int getBase() { return this->base; }
    int getAltura() { return this->altura; }

    // Metodo Abstracto
    virtual int area() = 0;
};


class Rectangulo : public Figura // Herencia
{
    public:
    // Polimorfismo
    int area()
    {
        return this->altura * this->base;
    }

};


class Triangulo : public Figura {

    public:
    // Polimorfismo
    int area() {
        return (this->base * this->altura) / 2;
    }
};

int main()
{
    
    Rectangulo r;
    r.setAltura(5);
    r.setBase(10);
    
    cout << r.area() << endl;

    Triangulo t;
    t.setAltura(10);
    t.setBase(100);

    cout << t.area() << endl;
    
    return 0;
}
