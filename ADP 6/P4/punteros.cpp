/**
 * @file punteros.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief 
 * @version 0.1
 * @date 2025-06-11
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<iostream>

using namespace std;

int suma(int &a, int &b) {
    a = 100;
    return a + b;
}

int main()
{
    int a = 10;
    int b = 5;

    int *c = new int;

    delete c;

    cout << suma(a, b) << a << endl;
    
    return 0;
}
