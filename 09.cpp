#include <iostream>
//Write a program to calculate the sum of all numbers from 1 to n (input by the user).

using namespace std;
int main()
{
    int num, sum = 0;
    int i;
    cout << "*** Let's do the sum of n natural numbers ***\n";
    cout << "number :";
    cin >> num;
    for (i = 1; i <= num; i++)
    {
        sum = sum + i;
        cout << " " << i << " + ";
    }
    cout << "\nthe sum is :" << sum;
    return 0;
}