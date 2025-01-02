#include <iostream>
// Write a program to find the smallest of three numbers entered by the user.
using namespace std;
int main()
{
    int a, b, c;
    cout << "*** Let's check the smallest number ***\n";
    cout << "A :";
    cin >> a;
    cout << "B :";
    cin >> b;
    cout << "C :";
    cin >> c;
    if (a < b || a < c)
    {
        cout << "A :" << a << " is smallest.";
    }
    else if (b < a || b < c)
    {
        cout << "B :" << b << " is smallest.";
    }
    else
    {
        cout << "C :" << c << " is smallest.";
    }
    return 0;
}