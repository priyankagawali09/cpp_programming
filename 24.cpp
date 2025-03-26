#include <iostream>
#include <string>
// multi-level inheritance
using namespace std;
class person
{
public:
    string name;
};
class student : public person
{
public:
    int roll_no;
};
class gradstudent : public student
{
public:
    string research_area;
    void display()
    {
        cout << "Name :" << name << endl;
        cout << "roll no :" << roll_no << endl;
        cout << "Research area :" << research_area << endl;
    }
};
int main()
{
    gradstudent s1;
    s1.name = "manish sharma";
    s1.research_area = "benglore";
    s1.roll_no = 34;
    s1.display();
    gradstudent s2;
    s2.name = "anamika sharma";
    s2.roll_no = 54;
    s2.display();
    s2.research_area = "benglore";
    cout<<s2.research_area;
    return 0;
}