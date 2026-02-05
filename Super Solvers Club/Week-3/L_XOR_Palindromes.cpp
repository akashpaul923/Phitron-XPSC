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
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < n - i - 1; i++)
    {
        if (s[i] != s[n - i - 1])
            cnt++;
    }
    string ans = string(n + 1, '0');
    // cout << ans << nl;
    for (int i = cnt; i + cnt <= n; i++)
    {
        if (n % 2 || (i - cnt) % 2 == 0)
            ans[i] = '1';
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