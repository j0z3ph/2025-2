/**
 * @file bff.cpp
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

class Persona {
    private:
    int secreto;
    friend class Bestie;

    public:
    Persona() {
        secreto = 100;
    }
    
};

class Bestie {
    private:
    int maximo_secreto;
    

    public:
    int chismesito(Persona p) {
        return p.secreto;
    }
};


int main()
{
    Persona p;
    Bestie b;
    
    cout << b.chismesito(p) << endl;
    
    
    
    return 0;
}
