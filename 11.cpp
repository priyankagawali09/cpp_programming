#include <iostream>
// Write a program to reverse the digits of a number (e.g., 123 → 321).
using namespace std;
int main()
{
    int numbers;
    cout << "*** Let's do the experiment to reverse the numbers ***\n";
    cout << "Give me numbers :";

    for (int i = 1; i <= 10; i++)
    {
        cout << " " << i;
    }
    cout << "\n reverse numbers are :";
    for (int i = 10; i >= 1; --i)
    {
        cout << " " << i;
    }
    return 0;
}