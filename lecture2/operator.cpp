#include <iostream>
using namespace std;

//

int main()
{
    int a = 2;
    float b = 33.8;

    float c = a + (int)b; //explicit conversion

    ++a; // prefix operator
    a++; // postfix operator

    cout << "a is :" << a << endl
         << "b is :" << b << endl
         << "c is :"
         << c;

    return 0;
}
