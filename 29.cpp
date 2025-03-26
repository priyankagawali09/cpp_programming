#include <iostream>

using namespace std;
int dec_bin(int dec_num);

int dec_bin(int dec_num){
    int ans=0,pow=1,remain;
    cout<<"Decimal : "<<dec_num <<"--> ";
    while(dec_num > 0){
        remain=dec_num%2;
        ans=ans +(remain*pow);
        dec_num=dec_num/2;
        pow=pow*10;
    }
    cout<<"Binary  :"<<ans << endl;
}
int main() {
    int dec_num;
    cout<<"enter the Decimal number:"<<endl;
    cin>>dec_num;
    dec_bin(dec_num);
    return 0;
}
