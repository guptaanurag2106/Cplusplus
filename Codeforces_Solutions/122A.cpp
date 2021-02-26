#include <bits/stdc++.h>
using namespace std;

bool Lucky(int n){
    while(n>0){
        if (n%10!=4 && n%10!=7)
            return false;
        n/=10;
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    
    for (int i=1;i<=n;i++){
        if (n%i==0 && Lucky(n/i)){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}