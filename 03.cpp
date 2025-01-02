#include <iostream>
// Write a program to find the largest of two numbers.

using namespace std;
int main()
{
    int x, y;
    cout << "*** Let's check which is the large number ***\n"
         << endl;
    cout << " value of X : ";
    cin >> x;
    cout << " value of Y : ";
    cin >> y;
    if (x > y)
    {
        cout << "The X=" << +x << "is greatest number.";
    }
    else
    {
        cout << "The Y=" << +y << " is greatest number.";
    }
    return 0;
}