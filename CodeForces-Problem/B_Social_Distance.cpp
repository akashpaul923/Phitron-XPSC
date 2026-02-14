#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n > m)
    {
        no;
        return;
    }
    sort(a.begin(), a.end());
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        sum += a[i];
    }
    ll mn = a.front(), mx = a.back();
    ll nd = sum + n + (mx - mn);
    if (nd <= m)
        yes;
    else
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