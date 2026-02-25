#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve()
{
    ll x, y;
    cin >> x >> y;
    ll d = x - 2 * y;
    if (d < 0 || d % 3)
    {
        no;
        return;
    }
    ll t = d / 3;
    ll n = max(0LL, -y);
    if (t < n)
    {
        no;
        return;
    }
    yes;
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