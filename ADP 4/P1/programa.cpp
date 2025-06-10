/**
 * @file programa.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi primer programa
 * @version 0.1
 * @date 2025-06-10
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<iostream>
#include"stdraul.hpp"

using namespace std;

int main()
{
    float entero1, entero2;
    string aux;
    cout << "Usuario, ingresa un entero: ";
    cin >> entero1;

    cout << "Usuario, ingresa un entero: ";
    cin >> entero2;

    cout << "La division es " << divide(entero1, entero2, 2.0f) << endl;
    
    return 0;
}
