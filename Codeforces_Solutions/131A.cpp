#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin>>s;
    int n=s.size();
    for(int i=1;i<n;i++){
        if (islower(s[i])){
            cout<<s;
            return 0;
        }
    }
    if (isupper(s[0])){
    transform(s.begin(),s.end(), s.begin(), ::tolower);
    cout<<s;
    }
    else{
        transform(s.begin(),s.end(), s.begin(), ::tolower);
        cout<<char(toupper(s[0])) + s.substr(1,n-1);  
    }
    return 0;
}