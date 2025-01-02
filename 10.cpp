#include <iostream>
//Write a program to print the multiplication table of a number.
using namespace std;
int main()
{
    int n;
    cout << "*** Let's write the code for printing the multiplication table ***\n";
    cout<<"Number : ";
    cin>>n;
    for(int i=1;i<=10;i++){

            cout<<""<<n<<"*"<<""<<i<<" =  "<<n*i<<endl;

    }
    return 0;
}