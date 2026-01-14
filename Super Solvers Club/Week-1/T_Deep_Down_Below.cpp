#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> a(n);
    for (ll i = 0; i < n; i++)
    {
        ll k;
        cin >> k;
        for (ll j = 0; j < k; j++)
        {
            ll x;
            cin >> x;
            a[i].first = max(a[i].first, x + 1 - j);
        }
        a[i].second = k;
    }
    sort(a.begin(), a.end());
    ll ans = a[0].first, total = a[0].first + a[0].second;
    for (ll i = 1; i < n; i++)
    {
        if (total >= a[i].first)
        {
            total += a[i].second;
        }
        else
        {
            ll x = a[i].first - total;
            ans += x;
            total += (x + a[i].second);
        }
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