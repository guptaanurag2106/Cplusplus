#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string isPrime(int n){
    if(n==1)
    return "Not Prime";
    int sqrt1=floor(sqrt(n));
    for(int i=2;i<=sqrt1;i++){
        if (n%i==0){
            return "Not prime";
            break;
        }
    }
    return "Prime";
}
int main() {
    cout<<"asd"<<endl;
    int n;
    cin>>n;
    vector<string> prime; 
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        prime.push_back(isPrime(a));
    }
    for(int i=0;i<n;i++)
    cout<<prime[i]<<endl;     
    return 0;
}
