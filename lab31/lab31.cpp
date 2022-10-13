// Lab_03.cpp
// Заплетнюк Юлія Іванівна
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 7
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x;
    double y;
    double A;
    double B;
    cout << "x= "; cin >> x;
    A = x*x*sin(x/2);

    // спосіб 1: розгалуження в скороченій формі
    if (x<=-5) 
        B = atan(exp(x));
    if (-5<x && x<=0)
        B = 1+(pow(x,3)/4);
    if (x>0)
        B = log(abs(x))-x/5;
    y = A + B;
    cout << endl;
    cout << "1) y = " << y << endl;
    
    // спосіб 2: розгалуження в повній формі
    if (x<=-5) 
        B = atan(exp(x));
    else 
        if (x>0) 
            B = 1+(pow(x,3)/4);
        else 
            B = log(abs(x))-x/5;
    y = A + B;
    cout << "2) y = " << y << endl;
    cin.get();
    return 0; 
}
