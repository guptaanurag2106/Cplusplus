#include<iostream>
using namespace std;

class Print1{
    public:
        string name;
    public:
        Print1(string name):name(name){cout<<"print1 created"<<endl;}
        Print1(const Print1& other){name=other.name; cout<<"copy constructor"<<endl;}
        void print1(){
            cout<<"Hello"<<"\n";
            cout<<name<<"\n";
        }
};

int main(){
    Print1 abc("asd");
    Print1 abcd=abc;
    abc.print1();
    abcd.print1();
    abcd.name="asdf";
    abcd.print1();
    string d="hello";
    string s={'n',d[3],d[4],0};
    cout<<s;
    cout<<"123";

}

