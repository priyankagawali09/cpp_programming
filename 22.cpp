 #include <iostream>
//cpp code to implement a class and constructor
using namespace std;
class teacher
{ public:
 string name;
 int*  roll;
 
teacher(string name,int rolln){
    this->name=name;
    roll =new int ;
    *roll= rolln;

}
// deep copy constructor
teacher( const teacher &obj){
 this->name=obj.name;
 roll= new int;
 *(roll)=*obj.roll;

}
void getInfo(){
    cout<<"Students Info "<<endl;
    cout<<"Name :"<<name<<endl;
    cout<<"Roll no :"<<*roll<<endl;
    cout<<endl;
}  
};
int main()
{     
    teacher t1("priyanka",9);
    t1.getInfo();
    teacher t2(t1);
    *(t2.roll)=5;
    t2.getInfo();
    
    return 0;
}
