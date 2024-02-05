#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "enter value of a ,b and c: ";
    cin >> a >> b >> c;

    if (a == b && b == c && c == a)
        cout << "a, b and c value is same";

    else
    {
        if (a > b)
        {
            if (a > c)
            {
                cout << "a is max";
            }
            else
            {
                cout << "c is max";
            }
        }

        else
        {
            if (b > c)
            {
                cout << "b is max";
            }
            else
            {
                cout << "c is max";
            }
        }
    }

    return 0;
}
