/**
 * @file programa.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi primer constructor
 * @version 0.1
 * @date 2025-06-12
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <iostream>

using namespace std;

class Punto
{
private:
    int x;
    int y;

public:
    friend ostream &operator<<(ostream &os, Punto &p)
    {
        os << "(" << p.x << "," << p.y << ")";
        return os;
    }

    Punto operator+(Punto &p2)
    {
        Punto c;
        c.setX(x + p2.getX());
        c.setY(y + p2.getY());
        return c;
    }

    int getX() { return this->x; }
    int getY() { return this->y; }

    void setX(int x) { this->x = x; }
    void setY(int y) { this->y = y; }
};

class Rectangulo
{
private:
    int base;
    int altura;

public:
    // Constructor
    Rectangulo(int base, int altura)
    {
        this->altura = altura;
        this->base = base;
    }

    // Destructor
    ~Rectangulo()
    {
        cout << "Me mori :'(" << endl;
    }

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

    // Metodos

    int area()
    {
        return this->base * this->altura;
    }
};


int main()
{
    Rectangulo *rect = new Rectangulo(5,6);
    cout << rect->area() << endl;

    delete rect;

    int *a = new int;
    int *arr = new int[10];

    delete a;
    delete[] arr;

    Punto p1, p2;
    p1.setX(4);
    p1.setY(6);
    p2.setX(9);
    p2.setY(12);

    Punto res = p1 + p2;

    cout << res << endl;
    return 0;
}
