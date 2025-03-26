#include <iostream>
//Write a program to find the factorial of a given number using a loop.

using namespace std;
int main() {
    cout<<"***Let's find the factorial of nth numbers ***\n";
    int fact=1,num;
    cout<<"num :";
    cin>>num;
    for(int i=1;i<=num;i++){
        fact=fact * i;
    }
            cout<<"the factorial of "<<num<< " is "<<fact;

    return 0;
}