#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl '\n'

const int N = 1e5 + 5;
int ans = 0, m;
vector<vector<int>> adj(N);
vector<int> v(N), vis(N, 0);

void dfs(int node, int p, int cnt)
{
    if (v[node])
    {
        cnt++;
    }
    else
    {
        cnt = 0;
    }
    if (cnt > m)
    {
        return;
    }
    bool flag = true;
    for (int x : adj[node])
    {
        if (x != p)
        {
            flag = false;
            dfs(x, node, cnt);
        }
    }
    if (flag)
    {
        ans++;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    for (int i = 1; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1, -1, 0);

    cout << ans << nl;

    return 0;
}