#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

const int maxN = 30;

void solve()
{
    int n;
    cin >> n;
    vector<int> cnt(maxN);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        cnt[__lg(x)]++;
    }
    ll ans = 0;
    for (int i = 0; i < maxN; i++)
    {
        ans += (1LL * cnt[i] * (cnt[i] - 1) / 2);
    }
    cout << ans << nl;
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