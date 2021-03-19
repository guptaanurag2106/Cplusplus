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

    int n, m, a, b;
    cin >> n >> m >> a >> b;
    if (m * a < b)
    {
        cout << n * a;
    }
    else
    {
        cout << (n / m) * b + min((n % m) * a, b);
    }

    return 0;
}