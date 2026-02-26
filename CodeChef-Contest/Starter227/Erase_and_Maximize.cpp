#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

void solve()
{
    ll n, s;
    cin >> n >> s;
    ll ans = 6 * n;
    if (s <= 5 * n)
    {
        cout << ans << nl;
        return;
    }
    ll k = (s - n) / 5;
    cout << ans - k << nl;
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