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
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        // cout << a << " " << b << nl;
        ans = max(ans, a);
        ans = min(ans, b);
        // ans = min(a,b);
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