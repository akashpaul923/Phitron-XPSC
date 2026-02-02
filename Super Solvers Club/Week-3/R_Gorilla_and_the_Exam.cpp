#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

void solve()
{
    int n, k;
    cin >> n >> k;
    map<int, int> mp;
    while (n--)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    vector<pair<int, int>> v;
    for (auto [x, y] : mp)
    {
        v.push_back({y, x});
    }
    sort(v.begin(), v.end());
    int ans = v.size();
    for (int i = 0; i < v.size(); i++)
    {
        if (k >= v[i].first)
        {
            k -= v[i].first;
            ans--;
        }
    }
    // cout << ans << nl;
    cout << max(ans, 1) << nl;
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