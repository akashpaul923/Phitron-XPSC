#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

ll sum(string s)
{
    ll sm = 0;
    for (int i = 0; i < s.size(); i++)
    {
        sm += (s[i] - '0');
    }
    return sm;
}

void solve()
{
    ll x;
    cin >> x;
    ll cnt = 0;
    for (int i = 1; i <= 90; i++)
    {
        if (sum(to_string(x + i)) == i)
        {
            cnt++;
        }
    }
    cout << cnt << nl;
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