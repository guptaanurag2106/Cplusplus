#include <bits/stdc++.h>
using namespace std;

int main(){
   vector<int> l;
   int n;
   cin>>n;
   for (int i=0;i<n;i++){
	int a;
	cin>>a;
	l.push_back((a%2==0)?1:0);
    }
    if (n==1)
	cout<<1;
    else{
    int t=(count(l.begin(),l.end(),1)>count(l.begin(),l.end(),0))?0:1;
    for (int i=0;i<n;i++){
	if (l[i]==t){
		cout<<i+1;
		break;
	}
    }
    }
    return 0;
}