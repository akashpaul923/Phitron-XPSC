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
    // int c = (n / 4) * 400;
    // int r = n % 4;
    // if (r != 0)
    // {
    //     int e = max(200, r * 100);
    //     c += e;
    // }
    // cout << c << nl;
    cout << max(200, n * 100) << nl;
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
