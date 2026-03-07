#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'

const int INF = 1e9;

int dfs(int u, vector<int> &L, vector<int> &R, string &s)
{
    if (L[u] == 0 && R[u] == 0)
        return 0;

    int ans = INF;

    if (L[u] != 0)
    {
        int cost = (s[u - 1] == 'L' ? 0 : 1);
        ans = min(ans, cost + dfs(L[u], L, R, s));
    }

    if (R[u] != 0)
    {
        int cost = (s[u - 1] == 'R' ? 0 : 1);
        ans = min(ans, cost + dfs(R[u], L, R, s));
    }

    return ans;
}

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<int> L(n + 1), R(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> L[i] >> R[i];

    cout << dfs(1, L, R, s) << nl;
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