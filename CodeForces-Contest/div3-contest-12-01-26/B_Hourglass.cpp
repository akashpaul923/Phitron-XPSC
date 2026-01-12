#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

void solve()
{
    ll s, k, m;
    cin >> s >> k >> m;

    ll r = ((m / k) % 2 == 0) ? s : min(k, s);
    ll e = m % k;
    cout << ((r > e) ? r - e : 0) << nl;
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