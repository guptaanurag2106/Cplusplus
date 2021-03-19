// #include <bits/stdc++.h>
// using namespace std;

// #define F(i, a, b) for (int i = a; i < b; i++)
// #define F1(i, a) for (int i = 0; i < a; i++)
// #define pb push_back

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int n, m;
//     cin >> n >> m;

//     string s, t;
//     cin >> s;
//     cin >> t;
//     int max = 0;
//     int p1 = 0, p2 = 0;
//     F1(i, m)
//     {
//         p2 = s.find_last_of(t[i]);
//         if (p2 - p1 > max)
//         {
//             max = p2 - p1;
//         }
//         p1 = s.find(t[i]);
//     }
//     cout << max;

//     return 0;
// }
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int maxn = 200005;
int n, m, l[maxn], r[maxn], ans;
string s, t;
vector<int> v[26];

int main()
{
    cin >> n >> m;
    cin >> s >> t;
    for (int i = 1; i <= n; i++)
    {
        v[s[i - 1] - 'a'].push_back(i);
    }
    l[1] = *v[t[0] - 'a'].begin();
    for (int i = 2; i <= m; i++)
    {
        int c = t[i - 1] - 'a';
        l[i] = *upper_bound(v[c].begin(), v[c].end(), l[i - 1]);
    }
    r[m] = v[t[m - 1] - 'a'].back();
    for (int i = m - 1; i >= 1; i--)
    {
        int c = t[i - 1] - 'a';
        r[i] = v[c][lower_bound(v[c].begin(), v[c].end(), r[i + 1]) - v[c].begin() - 1];
    }
    for (int i = 1; i < m; i++)
    {
        if (!r[i + 1] || !l[i])
            continue;
        ans = max(ans, r[i + 1] - l[i]);
    }
    cout << ans << "\n";
}