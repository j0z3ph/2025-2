/**
 * @file programa.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2025-06-11
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
    void setX(int x) { this->x = x; }
    void setY(int y) { this->y = y; }

    int getX() { return this->x; }
    int getY() { return this->y; }

    Punto operator-(Punto &p)
    {
        Punto res;
        res.x = x - p.x;
        res.y = y - p.y;
        return res;
    }

    Punto operator+(Punto p2)
    {
        Punto p3;
        p3.setX(x + p2.getX());
        p3.setY(y + p2.getY());
        return p3;
    }

    friend ostream &operator<<(ostream &os, Punto &p)
    {
        os << "(" << p.x << "," << p.y << ")";
        return os;
    }
};

class Rectangulo
{
private:
    float base;
    float altura;

public:
    // Constructor
    Rectangulo(float base, float altura)
    {
        this->base = base;
        this->altura = altura;
    }

    // Destructor
    ~Rectangulo()
    {
        cout << "Me mori" << endl;
    }

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
        return this->base * this->altura;
    }

    float area(float b, float a)
    {
        return a * b;
    }
};

int main()
{
    {
        Rectangulo rect(5.6f, 6.4f);

        cout << "El area del rectangulo es: "
             << rect.area() << endl;
    }

    Punto *dinamico = new Punto();

    delete dinamico;
    dinamico = NULL;

    Punto p1, p2;
    p1.setX(4);
    p1.setY(5);

    p2.setX(7);
    p2.setY(8);

    Punto res = p1 + p2;

    cout << res << endl;

    return 0;
}
