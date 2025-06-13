/**
 * @file programa.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
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
        Punto res;
        res.setX(x + p2.getX());
        res.setY(y + p2.getY());

        return res;
    }

    void setX(int x) { this->x = x; }
    void setY(int y) { this->y = y; }

    int getX() { return this->x; }
    int getY() { return this->y; }
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
        this->base = base;
        this->altura = altura;
    }

    // Destructor
    ~Rectangulo()
    {
        cout << "Me mori XD" << endl;
    }

    // Setters
    void setBase(int base) { this->base = base; }
    void setAltura(int altura) { this->altura = altura; }

    // Getters
    int getBase() { return this->base; }
    int getAltura() { return this->altura; }

    // Metodo
    int area()
    {
        return this->base * this->altura;
    }
};

int suma(int& a, int& b) {
    a = 100;
    return a + b;
}


int main()
{
    int a = 8;
    int b = 42;

    cout << suma(a, b) << endl << a << endl;

    //return 0;



    {
        Rectangulo *rect = new Rectangulo(6,7);
        cout << rect->area() << endl;

        delete rect;
    }

    while(99) ;

    Punto p1, p2;
    p1.setX(8);
    p1.setY(14);

    p2.setX(20);
    p2.setY(7);

    Punto res = p1 + p2;

    cout << res << endl;

    return 0;
}
