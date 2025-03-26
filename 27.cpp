#include <iostream>
// programme for exception handling 
using namespace std;
int main()
{
    int a, b;
    cout << "*** Enter the Two numbers A and B ***" << endl;
    cout << "A :";
    cin >> a;

    cout << "B :";
    cin >> b;
    try
    {
        if (b == 0)
        {
            throw " Divisible  by zero error";
        }
        else
        {
            cout << "Result = " << a / b << endl;
        }
    }
    catch (const char *msg)
    {
        cout << "Exception caught :" << msg;
    }

    return 0;
}