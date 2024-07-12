#include<iostream>
using namespace std;

int main()
{
    short int age;
    string name;
    cout<<"please enter your name "<<endl;
    cin>>name;
    cout<<"pales Enter age:"<<endl;
    cin>>age;
    cout<<"*****************************************\n";
    cout<<" wlecme mis :"<<name<<endl;
    cout<<"your age :"<<age<<endl;
    cout<<"*****************************************\n";
    signed int x=-1254824;
    short y=34525;
    cout<<x<<endl;
    cout<<y<<endl;
    double distance=56e2;//56e2 is equal to 56*10^2
    cout<<"thes distance:"<<distance<<endl;
    cout<<" size of bool data type is "<<sizeof(bool)<<"\n";//معرفة حجم الداتاتايب 
    cout<<" size of char data type is "<<sizeof(char)<<"\n"; //siz of dtat type
    cout<<" size of long long data type is "<<sizeof(long long)<<"\n";
    cout<<" size of double data type is "<<sizeof(double)<<"\n";



    return 0;
}