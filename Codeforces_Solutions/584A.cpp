#include <bits/stdc++.h>
using namespace std;

#define F(i, a, b) for (int i = a; i < b; i++)
#define F1(i, a) for (int i = 0; i < a; i++)
#define pb push_back

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout << "ad";
    int n, t;
    cin >> n;
    cin >> t;
    if (n == 1 && t == 10)
    {
        cout << -1;
        return 0;
    }

    if (t == 10)
        cout << 1;
    else
        cout << t;

    for (int i = 0; i < n - 1; ++i)
    {
        cout << 0;
    }

    return 0;
}