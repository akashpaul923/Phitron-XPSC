#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = 0;
    if (x == y)
    {
        for (auto val : a)
        {
            ans += val;
        }
        cout << ans << nl;
        return;
    }
    ll cnt = 0;
    for (auto val : a)
    {
        cnt += val / x;
    }
    for (auto val : a)
    {
        ll curr = val + (cnt - val / x) * y;
        ans = max(ans, curr);
    }
    cout << ans << nl;
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