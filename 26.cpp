#include <iostream>
// function overloading
using namespace std;
class print
{
public:
    void display()
    {
        cout << "this is non parameterized constructor" << endl;
    }
    void display(int x)
    {
        cout << "this is parameterized constructor" << endl;
    }
    // void show(int x)
    // {
    //     cout << "this is an integer : " << x;
    // }
    // void show(char x)
    // {
    //     cout << "this is an character : " << x;
    // }
};
int main()
{
    print p1;
    p1.display();
    print p2;
    p2.display(5);
    // print s1;
    // s1.show('A');
    // print s2;
    // s2.show(123);

    return 0;
}