/**
 * @file luchones.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief 
 * @version 0.1
 * @date 2025-06-17
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<iostream>

using namespace std;

class Mama {
    public:
    void metodo(){
        cout << "Soy la mama" << endl;
    }
};

class Papa {
    public:
    void metodo(){
        cout << "Soy el papa" << endl;
    }
};

class Amante {
    public:
    void metodo(){
        cout << "Soy el amante" << endl;
    }
};

class Raul : public Mama, public Papa, public Amante 
{
};

int main()
{
    Raul r;
    Mama m;
    Papa p;
    Amante a;

    m.metodo();
    p.metodo();
    a.metodo();
    r.Mama::metodo();
    
    return 0;
}
