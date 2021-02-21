#include <iostream>
using namespace std;
int main(){
    long long n,m,a;
    cin>>n>>m>>a;
    cout<<(--n/a+1)*(--m/a+1);
    return 0;
}