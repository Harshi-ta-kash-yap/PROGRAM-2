// header file
#include <iostream>
// two types of header file
// 1. sys tem header files -comes with compiler
// mvhghchgg   #include "pro.h" user defined
using namespace std;
int gl = 56;
char charcter = 'f';
int main()
{
    int a = 2, b = 9;
    cout << "\nAdd of two a and b =        " << ++a + b;
    cout << "\nSubtract of two  a and b =  " << a - b;
    cout << "\nMultiply Of two a and b =   " << --a * b;
    cout << " \nModulus of two a and b =   " << a % b;
    cout << " \ndivision of two a and b =  " << a / b << endl;
    int gl = 00003;
    cout << "local  " << gl << endl;
    cout << "global  " << ::gl << endl;
    cout << "\nOriginal value of a and b =  " << a << " and  " << b;
    cout << "\nhello my language ";

    return 0;
}