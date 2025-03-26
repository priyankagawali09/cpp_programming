#include <iostream>
//cpp code to implement a class
using namespace std;
class teacher
{
private:
    double salary;

public:
// non parameterized constructor
teacher(){
    cout<<"___SVKM IOT , Dhule___"<<endl;
}
    string name;
    string dept;
    void changedept(string newdept)
    {
        dept = newdept;
    }
    //to set the value private member function
    void setsal(double s){
        salary=s;
    }
    //to get private value
    double getsal(){
        return salary;
    }
};
int main()
{
    teacher t1;
    t1.name = "priyanka";
    t1.dept = "IT";
    t1.setsal(54000);
    cout << "Name : " << t1.name << endl ;
    cout << "Old Department : " << t1.dept << endl;
    t1.changedept("computer science");
    cout << "New Department : " << t1.dept << endl;
    cout<<"Salary : "<<t1.getsal()<<endl;
    cout<<endl;
    teacher t2;
      t2.name = "Vijaylakshmi Bittal";
    t2.dept = "Computer Science";
    t2.setsal(0);
    cout << "Name : " << t2.name << endl ;
    cout << "Old Department : " << t2.dept << endl;
    t2.changedept("IT");
    cout << "New Department : " << t2.dept << endl;
    cout<<"Salary : "<<t2.getsal()<<endl;
        cout<<endl;

    return 0;
}