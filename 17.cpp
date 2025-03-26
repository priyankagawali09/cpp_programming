#include <iostream>
// Write a program to print all numbers from 1 to 100 that are divisible by both 3 and 5.

using namespace std;
int main()
{
    // int num;
    cout<<"Let's  print all numbers from 1 to 100 that are divisible by both 3 and 5."<<endl;
    for (int i = 1; i <= 50; i++)
    {
        cout << i << " , ";
    }
    cout<<endl;
    
    cout<<" The numbers are :"<<endl;
    for (int i = 1; i <= 50; i++)
    {

        if (i % 3 == 0)
        {
            cout << " " << i << " is divisible by 3\n";
        }
        else if (i % 5 == 0)
        {
            cout << " " << i << " is divisible by 5\n";
        }
        else if (i % 3 == 0 && i % 5 == 0)
        {
            cout << " " << i << " is divisible by both 3 and 5\n";
        }
    }

    return 0;
}