#include <iostream>
// multiple inheritance
using namespace std;
class A
{
public:
    string name;
};
class B 
{
public:
    int roll_no;
};
class C : public B,public A{
public:
};

int main() {
    C s1;
    s1.name = "Tony Stark"; // Now no ambiguity
    cout << "Name: " << s1.name << endl;

    return 0;
}