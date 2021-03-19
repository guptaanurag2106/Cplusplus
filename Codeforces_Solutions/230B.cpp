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

    long n;
    cin >> n;
    string s[n];
    F1(i, n)
    {
        long x;
        cin >> x;
        int a = 0;
        for (long j = 1; j < x/2+1; j++)
        {
            if (x % j == 0)
                a++;
            if (a > 2)
            {
                s[i] == "NO";
                break;
            }
        }
        s[i] = (a == 2) ? "YES" : "NO";
    }
    F1(i, n)
    cout << s[i] << "\n";

    return 0;
}