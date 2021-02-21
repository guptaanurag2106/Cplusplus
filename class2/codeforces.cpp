#include<iostream>
#include<vector>

using namespace std;

#define FOR(n) for(int i=0;i<n;i++)
#define ll long long

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b); 
     
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin>>t;
    vector<int> result;
    for(int i=0;i<t;i++){
        ll a,b,x;
        cin>>a;
        cin>>b;
        cin>>x;
        if (a>=b && x% (gcd(a+b,a-b))==0)
            result.push_back(1);    
        else if (a<b && x% (gcd(a+b,b-a))==0)
            result.push_back(1);
        else
            result.push_back(0);       
        
    }
    for(int i=0;i<t;i++)
        cout<<result[i]<<endl;
    return 0;
}