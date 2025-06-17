/**
 * @file amigos.cpp
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

class Valentina {
    private:
    string secreto;
    friend class Yerik;

    public:
    Valentina() {
        this->secreto = "No quiero exponerme";
    }
};

class Yerik {
    private:
    string mi_secreto;

    public:

    string chismesito(Valentina v) {
        return v.secreto;
    }
};



int main()
{
    Valentina v;
    Yerik y;
    cout << y.chismesito(v) << endl;
    
    
    return 0;
}
