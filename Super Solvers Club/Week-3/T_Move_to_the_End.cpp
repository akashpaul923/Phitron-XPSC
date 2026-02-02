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
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<ll> mx(n + 1, 0), sum(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        mx[i] = max(mx[i - 1], a[i - 1]);
        sum[i] = sum[i - 1] + a[i - 1];
    }
    for (int k = 1; k <= n; k++)
    {
        cout << mx[n - k + 1] + sum[n] - sum[n - k + 1] << " ";
    }
    cout << nl;
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