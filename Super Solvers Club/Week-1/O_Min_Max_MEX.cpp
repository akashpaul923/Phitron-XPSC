#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    auto ok = [&](ll m)
    {
        ll cnt = 0;
        set<ll> st;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] < m)
            {
                st.insert(a[i]);
            }
            if (st.size() == m)
            {
                st.clear();
                cnt++;
            }
        }
        return cnt >= k;
    };

    ll l = 0, r = n, mid, ans = 0;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
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