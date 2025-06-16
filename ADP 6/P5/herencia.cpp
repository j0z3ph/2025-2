/**
 * @file herencia.cpp
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

class A {
    public:
    string metodo() {
        return "Soy A"; 
    }
};

class B {
    public:
    string metodo() {
        return "Soy B"; 
    }
};

class C {
    public:
    string metodo() {
        return "Soy C"; 
    }
};

class D : public A, public B, public C
{

};

int main()
{
    A a;
    B b;
    C c;
    D d;

    cout << a.metodo() << endl;
    cout << b.metodo() << endl;
    cout << c.metodo() << endl;
    cout << d.B::metodo() << endl;
    


    return 0;
}
