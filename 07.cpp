#include <iostream>
// Write a program to check if a number is divisible by both 3 and 5.

using namespace std;
int main()
{
    int number;
    cout << "*** Let's check number is divisible by both 3 and 5.***" << endl;
    cout << "give me number : ";
    cin >> number;
    if (number / 3 == 0)
    {
        if (number / 5 == 0)
            cout << "the number is divisible by both 3 and 5";
        else
        {
            cout << "the number is divisible by only 3 not 5";
        }
    }
    else
    {
        cout << "the number is divisible by only 5 not 3";
    }
    return 0;
}