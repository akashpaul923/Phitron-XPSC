#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

void solve()
{
    ll n;
    cin >> n;
    deque<ll> ans;
    for (int k = 0; k <= __lg(n); k++)
    {
        if ((n >> k) & 1)
        {
            ll val = n - (1LL << k);
            if (val > 0)
            {
                ans.push_front(val);
            }
        }
    }
    ans.push_back(n);
    cout << ans.size() << nl;
    for (auto a : ans)
    {
        cout << a << " ";
    }
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