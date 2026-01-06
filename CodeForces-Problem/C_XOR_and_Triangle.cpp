#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

void solve()
{
    int x;
    cin >> x;
    int cnt0 = 0, cnt1 = 0, p = x;
    while (p != 0)
    {
        if (p & 1 == 1)
            cnt1++;
        else
            cnt0++;
        p /= 2;
    }
    if (cnt1 < 2 || cnt0 == 0)
    {
        cout << -1 << nl;
        return;
    }
    int ans = 1;
    for (int i = 2; i < cnt0 + cnt1; i++)
    {
        ans = ans * 2 + 1;
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
