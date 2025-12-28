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
    multiset<ll> ml;
    while (n--)
    {
        ll x;
        cin >> x;
        ml.insert(x);
    }
    while (k--)
    {
        auto x = ml.begin();
        auto y = --ml.end();
        ll nw = *x + *y;
        ml.erase(x);
        ml.erase(y);
        ml.insert(nw);
    }
    for (auto x : ml)
        cout << x << " ";
    cout << nl;
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
