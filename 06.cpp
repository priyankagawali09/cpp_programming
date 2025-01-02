#include <iostream>
// Write a program to swap two numbers using a third variable.

using namespace std;
int main()
{
    int a, b, c;
    cout << "*** Let's do the swapping of two numbers ***\n";

    cout << "value of A:";
    cin >> a;
    cout << "value of B:";
    cin >> b;
    c = a;
    a = b;
    b = c;
    cout << "After Swapping \nA : " << a << "\nB : " << b;

    return 0;
}