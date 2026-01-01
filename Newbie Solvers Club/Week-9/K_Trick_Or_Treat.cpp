#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i] % m]++;
    }
    ll b, c = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> b;
        ll x = (m - (b % m)) % m;
        if (mp.find(x) != mp.end())
        {
            c += mp[x];
        }
    }
    cout << c << nl;
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
