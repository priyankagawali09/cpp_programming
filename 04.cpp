#include <iostream>
// Write a program to check whether a given number is positive, negative, or zero.

using namespace std;
int main()
{
    int num;
    cout << "*** Let's check the number entered by user is +ve/-ve/zero ***\n";
    cout << "Number :";
    cin >> num;
    if (num > 0)
    {
        cout << "\n  " << +num << " is the positive number\n"
             << endl;
    }
    else if (num < 0)
    {
        cout << " " << +num << "is the negative number\n"
             << endl;
    }
    else if (num == 0)
    {
        cout << "You enterd Zero...!\n";
    }

    return 0;
}