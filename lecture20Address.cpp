#include <iostream>
using namespace std;

int main() {
    char a = 'A';
    int b = 12345;
    short int c = 123;
    long int d = 123456789;
    signed long int e = -123456789;
    unsigned long int f = 123456789;
    float g = 123.45f;
    double h = 123.456789;
    long double i = 123.456789012345;
    wchar_t j = L'A';

    cout << "Size and Address of char: " << sizeof(char) << " byte, " << (void*)&a << endl;
    cout << "Size and Address of int: " << sizeof(int) << " bytes, " << &b << endl;
    cout << "Size and Address of short int: " << sizeof(short int) << " bytes, " << &c << endl;
    cout << "Size and Address of long int: " << sizeof(long int) << " bytes, " << &d << endl;
    cout << "Size and Address of signed long int: " << sizeof(signed long int) << " bytes, " << &e << endl;
    cout << "Size and Address of unsigned long int: " << sizeof(unsigned long int) << " bytes, " << &f << endl;
    cout << "Size and Address of float: " << sizeof(float) << " bytes, " << &g << endl;
    cout << "Size and Address of double: " << sizeof(double) << " bytes, " << &h << endl;
    cout << "Size and Address of long double: " << sizeof(long double) << " bytes, " << &i << endl;
    cout << "Size and Address of wchar_t: " << sizeof(wchar_t) << " bytes, " << &j << endl;

    return 0;
}
