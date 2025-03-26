#include <iostream>
//. Write a program to check if a number is even or odd.
using namespace std;
int main()
{
    int n;
    cout<<"Let's check if a number is even or odd.\n"<<endl;
for(int i=1;i<=5;i++){
    cout<<" "<<i<<" number :";
    cin>>n;
    if (n % 2==0)
    {
        cout <<" number " << n << " is even" << endl;
    }
    else
    {
        cout <<" number " << n << " is odd" << endl;
    }}

    return 0;
}