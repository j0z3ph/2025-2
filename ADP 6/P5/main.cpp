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
    float base;
    float altura;

public:
    
    // Setters
    void setBase(float base)
    {
        this->base = base;
    }
    void setAltura(float altura)
    {
        this->altura = altura;
    }

    // Getters
    float getBase()
    {
        return this->base;
    }
    float getAltura()
    {
        return this->altura;
    }

    // Metodos
    float area()
    {
        return 0.0f;
    }

};



class Rectangulo : public Figura
{
    public:
    float area(){
        return base * altura;
    }
};


class Triangulo : public Figura
{
    public:
    // Polimorfismo
    // Sobre escritura
    float area(){
        return (base * altura)/2.0;
    }
    

};



int main()
{
    Rectangulo r;
    r.setAltura(6.7);
    r.setBase(7.8);

    cout << r.area() << endl;
    
    
    return 0;
}
