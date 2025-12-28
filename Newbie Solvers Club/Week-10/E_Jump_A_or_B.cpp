#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

void solve()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    if (n * a > m || n * b < m)
    {
        no;
        return;
    }
    int e = m - (n * a), d = b - a;
    if (e % d == 0)
    {
        yes;
        return;
    }
    no;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
