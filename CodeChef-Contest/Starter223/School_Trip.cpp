#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

void solve()
{
    int n, x, k;
    cin >> n >> x >> k;
    int rem = x % k;
    // if (rem == 0)
    // {
    //     cout << 0 << nl;
    //     return;
    // }
    cout << min(abs(k - x), rem) << nl;
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