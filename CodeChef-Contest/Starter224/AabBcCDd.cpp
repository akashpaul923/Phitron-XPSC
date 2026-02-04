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
    string s;
    cin >> s;
    map<char, int> mp;
    for (auto ch : s)
    {
        if (ch >= 'A' && ch <= 'Z')
            mp[ch - 'A' + 'a']++;
        else
            mp[ch]++;
    }
    // for (auto [k, v] : mp)
    //     cout << k << " -> " << v << " ";
    // cout << nl;
    int mx1 = 0, mx2 = 0;
    for (auto [k, v] : mp)
    {
        if (v > mx1)
        {
            mx2 = mx1;
            mx1 = v;
        }
        else if (v > mx2)
        {
            mx2 = v;
        }
    }
    cout << mx1 + mx2 << nl;
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