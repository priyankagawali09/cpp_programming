 #include <iostream>
//cpp code to implement a class and constructor
using namespace std;
class teacher
{ public:
 string name;
 string dept;
 //parameterized constructor
teacher(string name,string dept){
    this->name=name;
    this->dept=dept;
}
void getInfo(){
    cout<<"students Info "<<endl;
    cout<<"Name :"<<name<<endl;
    cout<<"Department :"<<dept<<endl;
    cout<<endl;
}  
};
int main()
{     
    teacher t1("priyanka gawali","computer_science");
    t1.getInfo();
    teacher t2("prerena bhoi","IT");
    t2.getInfo();
    
    return 0;
}
