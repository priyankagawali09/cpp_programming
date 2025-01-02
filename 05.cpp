#include <iostream>
//Write a programe to calculate the area of circle
using namespace std;
int main()
{
    int radius;
    cout << "*** Let's calculate the area of circle ***\n";
    cout << "Give me radius :";
    cin >> radius;
    cout << "The area of cirle at radius " << +radius << " is : " << +3.14 * radius * radius << "\n"
         << endl;
    return 0;
}