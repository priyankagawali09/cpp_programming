#include <iostream>

using namespace std;
class A
{
    public:
    A(){
        cout<<"I am 1st constructor of  class A"<<endl;
    }
    A(int a){
        cout<<"I am 2nd constructor of class A"<<endl;
    }

};
int main() {
    A a1;
    A a2(5);
    return 0;
}