#include<bits/stdc++.h>

using namespace std;

#define FOR(n) for(int i=0;i<n;i++)
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll c;
    ll n;
    cin>>n;
    cin>>c;
    ll x=0;
    for( int j=1;j<=9;j++){
        if (j==1)
            FOR(n)
            x++;

    }

    cout<<(x % (1000000007));
    return 0;
}