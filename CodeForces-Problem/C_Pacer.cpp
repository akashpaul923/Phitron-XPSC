#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

void solve()
{
    int n, m;
    cin >> n >> m;
    ll ans = 0, curr_time = 0, curr_side = 0;
    while (n--)
    {
        ll a, b;
        cin >> a >> b;
        ll dif = a - curr_time;
        ans += dif;
        curr_side ^= (dif % 2);
        if (curr_side != b)
        {
            ans--;
            curr_side = b;
        }
        curr_time = a;
    }
    ans += (m - curr_time);
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
