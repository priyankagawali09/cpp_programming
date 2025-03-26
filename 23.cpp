#include <iostream>
#include <string>
// simple inheritance
using namespace std;
class person
{
public:
    string name;
    int age;
    person(string name, int age)
    {
        this->name = name;
        this->age = age;
        cout << "this is parent's constructor" << endl;
    }
};
class student : public person
{
public:
    int roll_no;
    student(string name, int age, int roll_no):person( name,age){
        this->roll_no = roll_no;
        cout<<"this is child's condtructor"<<endl;
    }
    void getInfo()
    {
        cout << "name :" << name << endl;
        cout << "age :" << age << endl;
        cout << "roll no :" << roll_no << endl;
                cout<<endl;

    }
};

int main()
{
    student s1("puja patil",45,33);
    s1.getInfo();
    student s2("prerana bhoi",18,32);
    s2.getInfo();

    return 0;
}