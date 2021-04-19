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

    int n, b;
    cin >> n;
    cin >> b;
    int x = 0;
    while (n != 0)
    {
        x += n;
        int rem = n % b;
        n = n / b + rem;
    }
    cout << x;

    return 0;
}