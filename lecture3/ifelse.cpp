#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    cout << "enter your age: ";
    cin >> a;

    if (a >= 18)
    {
        cout << "your age is " << a << "." << endl
             << "you are eligible to aplly for driving licence" << endl;
    }
    else
    {
        cout << "your age is " << a << "." << endl
             << "you are not eligible to apply for licence" << endl;
    }
    return 0;
}