#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

void solve()
{
    int n, m, l, r;
    cin >> n >> m >> l >> r;
    if (l == 0)
    {
        cout << 0 << " " << m << nl;
    }
    else
    {
        if (r >= m)
        {
            cout << 0 << " " << m << nl;
        }
        else
        {
            cout << r - m << " " << r << nl;
        }
    }
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