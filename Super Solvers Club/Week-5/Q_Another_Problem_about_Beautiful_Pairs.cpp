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
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = 0;
    for (ll x = 1; x <= (ll)sqrt(n) + 1; x++)
    {
        for (ll i = 0; i < n; i++)
        {
            ll idx = i - x * a[i];
            if (idx >= 0 && a[idx] == x)
            {
                ans++;
            }
            if (a[i] > (ll)sqrt(n) + 1)
            {
                ll idx2 = i + x * a[i];
                if (idx2 < n && a[idx2] == x)
                {
                    ans++;
                }
            }
        }
    }
    cout << ans << "\n";
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