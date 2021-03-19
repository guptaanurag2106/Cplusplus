#include <bits/stdc++.h>
using namespace std;

# define F(i,a,b) for(int i=a;i<b;i++)
# define F1(i,a) for(int i=0;i<a;i++)
#define pb push_back
//transform(s.begin(),s.end(), s.begin(), ::tolower);

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,l;
    cin>>n>>l;
    vector<int> a;
    F1(i,n){
        int x;
        cin>>x;
        a.pb(x);
    }
    sort(a.begin(),a.end());
    double max=(a[0]>(l-a[n-1]))?a[0]:(l-a[n-1]);
    double x=0.0;
    F1(i,n-1){
        x=(a[i+1]-a[i])/2.0;
        max=(x>max)?x:max;
    }
    cout<<fixed<<setprecision(10)<<max;
        
    return 0;
}