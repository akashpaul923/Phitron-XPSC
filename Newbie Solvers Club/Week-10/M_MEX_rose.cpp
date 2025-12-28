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
    vector<int> a(n), f(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] <= k)
            f[a[i]]++;
    }
    int cnt = 0;
    for (int i = 0; i < k; i++)
    {
        if (f[i] == 0)
            cnt++;
    }
    if (cnt <= f[k])
        cnt = f[k];
    cout << cnt << nl;
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
