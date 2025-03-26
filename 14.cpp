#include <iostream>
// Write a program to check if a given year is a leap year.

using namespace std;
int main()
{
    int year;
    cout<<"***Let's check the given year is leap year or not ***\n";

    for (int i = 1; i <= 5; i++)
    {
        cout << "year :";
        cin >> year;
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        {
            cout << "The year " << year << " is a leap year." << endl;
        }
        else
        {
            cout << "The year " << year << " is a  not leap year." << endl;
        }
    }
    return 0;
}