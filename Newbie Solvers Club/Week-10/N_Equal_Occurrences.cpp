#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    vector<ll> counts;
    for (auto [key, value] : mp)
    {
        counts.push_back(value);
    }
    sort(counts.rbegin(), counts.rend());
    ll ans = 0;
    for (int i = 0; i < counts.size(); i++)
    {
        ans = max(ans, counts[i] * (i + 1));
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
