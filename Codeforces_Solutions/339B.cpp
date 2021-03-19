// #include <bits/stdc++.h>
// using namespace std;

// #define F(i, a, b) for (int i = a; i < b; i++)
// #define F1(i, a) for (int i = 0; i < a; i++)
// #define pb push_back
// //transform(s.begin(),s.end(), s.begin(), ::tolower);

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     long n, m;
//     cin >> n >> m;
//     long x = 0;
//     long curr = 1;
//     F1(i, m)
//     {
//         long a;
//         cin >> a;
//         if (a >= curr)
//             x += a - curr;
//         else
//             x += n + (a - curr);
//         curr = a;
//     }
//     cout << x;

//     return 0;
// }
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, m, sum, i;
    scanf("%lld%lld", &n, &m);
    int a[100005];
    for (i = 0; i < m; i++)
    {
        scanf("%lld", &a[i]);
    }
    sum = a[0] - 1;
    for (i = 0; i < m - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            sum += a[i + 1] + n - a[i];
        }
        else
            sum += a[i + 1] - a[i];
    }
    printf("%lld\n", sum);
    return 0;
}