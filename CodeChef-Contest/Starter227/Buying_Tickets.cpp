#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

void solve()
{
    int k, n;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    string s;
    cin >> s;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            v.push_back(a[i]);
        }
    }
    // cout << v.size() << nl;
    if (v.size() < k)
    {
        cout << -1 << nl;
        return;
    }
    // for (auto vl : v)
    // {
    //     cout << vl << nl;
    // }
    // cout << nl;
    sort(v.begin(), v.end());
    ll total = 0;
    for (int i = 0; i < k; i++)
    {
        total += v[i];
    }
    cout << total << nl;
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