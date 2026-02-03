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
    int mn = (1 << 10) - 1, mx = 0;
    while (n--)
    {
        int x;
        cin >> x;
        mn &= x;
        mx |= x;
    }
    cout << mx - mn << nl;
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