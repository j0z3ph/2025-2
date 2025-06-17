/**
 * @file programa.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief 
 * @version 0.1
 * @date 2025-06-17
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <iostream>

using namespace std;

class Figura
{
protected:
    int base;
    int altura;

public:
    
    // Setters
    void setBase(int base)
    {
        this->base = base;
    }
    void setAltura(int altura)
    {
        this->altura = altura;
    }

    // Getters
    int getBase() { return this->base; }
    int getAltura() { return this->altura; }

    // Metodo abstracto
    virtual int area() = 0;
};


class Rectangulo : public Figura
{
    public:
    // Polimorfismo
    int area() // Sobre escritura (override)
    {
        return this->altura * this->base;
    }
};

class Triangulo : public Figura 
{
    public:
    // Polimorfismo
    int area() // Sobre escritura (override)
    {
        return (this->altura * this->base) / 2;
    }

};



int main()
{
    Triangulo r;
    
    r.setAltura(9);
    r.setBase(11);

    cout << r.area() << endl;
    

    
    return 0;
}
