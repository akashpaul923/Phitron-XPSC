#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    while (k && n > 1)
    {
        ll p = m - n % m;
        if (k >= p)
        {
            k -= p;
            n += p;
            while (n % m == 0)
            {
                n /= m;
            }
        }
        else
        {
            cout << n + k << nl;
            return;
        }
    }
    cout << n + k % (m - 1) << nl;
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