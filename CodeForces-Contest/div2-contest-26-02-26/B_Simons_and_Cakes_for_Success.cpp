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
    ll k = 1;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            k *= i;
            while (n % i == 0)
            {
                n /= i;
            }
        }
    }
    cout << (n > 1 ? k * n : k) << nl;
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