#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> l(n), r(n);
    for (int i = 0; i < n; i++)
    {
        cin >> l[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> r[i];
    }
    vector<int> left(n), right(n);
    for (int i = 0; i < n; i++)
    {
        right[i] = min(l[i], r[i]);
        left[i] = max(l[i], r[i]);
    }
    sort(right.rbegin(), right.rend());
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += left[i];
    }
    for (int i = 0; i < k - 1; i++)
    {
        ans += right[i];
    }
    cout << ++ans << nl;
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