#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

void solve()
{
    string s;
    cin >> s;
    int sz = s.size();
    if ((s[sz - 1] - '0') % 2)
    {
        cout << 0 << nl;
        return;
    }
    if (sz == 1)
    {
        cout << -1 << nl;
        return;
    }
    int mx = INT_MIN;
    for (auto c : s)
    {
        if ((c - '0') % 2)
        {
            cout << 1 << nl;
            return;
        }
        mx = max(mx, (c - '0'));
    }
    if (mx > (s[sz - 1] - '0'))
    {
        cout << 2 << nl;
        return;
    }
    cout << 3 << nl;
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