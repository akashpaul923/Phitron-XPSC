#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        v[t]++;
    }
    if (v[0] == 0)
        cout << "NO" << nl;
    else if (v[1] > 0)
        cout << "YES" << nl;
    else
        cout << (v[0] == 1 ? "YES" : "NO") << nl;
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