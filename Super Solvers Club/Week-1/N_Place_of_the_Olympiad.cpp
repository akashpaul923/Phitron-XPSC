#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    if (k <= n)
    {
        cout << 1 << nl;
        return;
    }

    ll l = 1, r = m, mid, ans = m;

    auto ok = [&](ll md)
    {
        ll d = (m / (md + 1)) * md + min(md, m % (md + 1));
        return n * d >= k;
    };

    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
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