#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

void solve()
{
    ll n, m, h;
    cin >> n >> m >> h;
    vector<ll> a(n + 1), b(n + 1), c;
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    for (ll i = 1; i <= m; i++)
    {
        ll idx, val;
        cin >> idx >> val;
        b[idx] += val;
        c.push_back(idx);
        if (b[idx] > h)
        {
            for(auto j : c)
            {
                b[j] = a[j];
            }
            c.clear();
        }
    }
    for (ll i = 1; i <= n; i++)
    {
        cout << b[i] << " ";
    }
    cout << nl;
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