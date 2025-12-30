#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int c = (a + (b * i)) % n;
        mx = max(mx, c);
    }
    cout << mx << nl;
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
