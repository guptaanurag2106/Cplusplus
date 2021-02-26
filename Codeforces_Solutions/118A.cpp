#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string s1="";
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for (auto i:s){
        if (i!='a' && i!='e' && i!='i' && i!='o' && i!='u' && i!='y' )  
            {s1+='.';
            s1+=i;}
    }
    cout<<s1;
    return 0;
}