#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

ll func(ll n)
{
    vector<ll> dp(n + 1, 1e9);
    dp[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        ll tmp = i;
        while (tmp)
        {
            ll d = tmp % 10;
            dp[i] = min(dp[i], 1 + dp[i - d]);
            tmp /= 10;
        }
    }
    return dp[n];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    cout << func(n) << nl;

    return 0;
}