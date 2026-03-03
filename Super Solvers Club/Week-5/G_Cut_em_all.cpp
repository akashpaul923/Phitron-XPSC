#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl '\n'

vector<vector<int>> g(100005);
int ans = 0;

int dfs(int u, int p)
{
    int s = 1;
    for (auto val : g[u])
    {
        if (val != p)
        {
            s += dfs(val, u);
        }
    }
    if (s % 2 == 0 && u != 1)
    {
        ans++;
    }
    return s;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    if (n % 2 != 0)
    {
        cout << -1 << nl;
    }
    else
    {
        dfs(1, 0);
        cout << ans << nl;
    }

    return 0;
}