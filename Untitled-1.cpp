#include<iostream>
#include "utils.h"
using namespace std;

void print(int &value);

int main(){
    int value=6888;
    print(value);
    cout<<value<<endl;
    return 0;
}

void print(int &value){
    value=263;
    cout<<value<<endl;  
}