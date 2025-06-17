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


class MuyPrivado {

    private:
    int secreto;
    public:
    friend int chisme(MuyPrivado p);

};

int chisme(MuyPrivado p) {
    return p.secreto;
}


class Mama {
    public:
    void metodo() {
        cout << "Soy mama" << endl;
    }
};

class Papa {
    public:
    void metodo() {
        cout << "Soy papa" << endl;
    }
};

class Cuyeyo {
    public:
    void metodo() {
        cout << "Soy Cuyeyo" << endl;
    }
};

class CR7 : public Mama, public Papa, public Cuyeyo
{

};

int main()
{
    MuyPrivado priv;
    chisme(priv);
    


    return 0;
}
