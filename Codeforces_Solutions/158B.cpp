#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int taxi=0;
    int g[]={0,0,0,0,0};
    for (int i=0;i<n;i++){
        int a;
        cin>>a;
        g[a]++;
    }
    taxi+=g[4];
    int a=min(g[1],g[3]);
    g[1]-=a;
    taxi+=g[3];
    taxi+=ceil(g[2]/2.0);
    g[2]-=2*ceil(g[2]/2.0);
    taxi+=ceil((g[1]+2*g[2])/4.0);
    cout<<taxi;
    return 0;
}