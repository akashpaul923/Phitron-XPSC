#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

void solve()
{
    ll b, g, x, y, n;
    cin >> b >> g >> x >> y >> n;
    if (x + y > n)
    {
        cout << -1 << nl;
        return;
    }
    ll total = b + g;
    ll mx = total / n;
    if (total % n != 0)
        mx++;
    // cout << mx << nl;
    ll br = b / x;
    ll gr = g / y;
    ll mn = min(br, gr);
    // cout << mn << nl;
    if (mx <= mn)
        cout << mx << nl;
    else
        cout << -1 << nl;
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