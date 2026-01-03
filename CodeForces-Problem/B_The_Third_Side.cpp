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
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n == 1)
    {
        cout << a.front() << nl;
        return;
    }
    if (n == 2)
    {
        cout << a.front() + a.back() - 1 << nl;
        return;
    }
    sort(a.begin(), a.end());
    ll ans = a[0] + a[1] - 1;
    for (int i = 2; i < n; i++)
    {
        ans += a[i] - 1;
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
