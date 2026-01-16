#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

void solve()
{
    ll n, h;
    cin >> h >> n;
    vector<ll> a(n), c(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> c[i];
    }

    auto ok = [&](ll m)
    {
        ll cnt = 0;
        for (ll i = 0; i < n; i++)
        {
            cnt = min(cnt + (1 + (m - 1) / c[i]) * a[i], h);
        }
        return cnt >= h;
    };

    ll l = 0, r = 1e12, mid;
    while (l + 1 < r)
    {
        mid = l + (r - l) / 2;
        ok(mid) ? r = mid : l = mid;
    }
    cout << r << nl;
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