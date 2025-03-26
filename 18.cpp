#include <iostream>
//. Write a program to print the Fibonacci series up to a given number.
using namespace std;
int main()
{
    int num, a1 = 0, a2 = 1, nextterm;
    cout << "Number : ";
    cin >> num;
    cout << "*** the series is ***\n";
    cout << ""<<a1<<" , "<<a2;

    for (int i = 3; i <= num; i++)
    {
        nextterm = a1 + a2;
        cout << " , "<<nextterm<<"";
        a1 = a2;
        a2=nextterm;
    }
    cout << endl;

    return 0;
}