#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int c=0;
    for (auto i:s){
        if (i=='h' && c==0) c++;
        else if (i=='e' && c==1)  c++;
        else if (i=='l' && (c==2 || c==3))  c++;
        
        else if (i=='o' && c==4) {
            cout<<"YES";
            return 0;}
    }
    cout<<"NO";
    return 0;
}