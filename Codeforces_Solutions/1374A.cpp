#include <bits/stdc++.h>
using namespace std;

#define F(i, a, b) for (int i = a; i < b; i++)
#define F1(i, a) for (int i = 0; i < a; i++)
#define pb push_back
#define endl \
    << "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    int a[t];

    F1(i, t)
    {
        int d;
        string s;
        cin >> d;
        cin >> s;
    }
    F1(i, t)
    {
        cout << a[i] endl;
    }
    return 0;
}