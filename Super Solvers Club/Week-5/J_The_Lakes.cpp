#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl '\n'

ll n, m, sum;
ll g[1005][1005];
ll dx[] = {0, 0, 1, -1};
ll dy[] = {1, -1, 0, 0};

bool valid(ll x, ll y)
{
    return x >= 0 && y >= 0 && x < n && y < m && g[x][y];
}

void dfs(ll x, ll y)
{
    sum += g[x][y];
    g[x][y] = 0;
    for (int i = 0; i < 4; i++)
    {
        ll tx = x + dx[i], ty = y + dy[i];
        if (!valid(tx, ty))
            continue;
        dfs(tx, ty);
    }
}

void solve()
{
    cin >> n >> m;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> g[i][j];
        }
    }
    ll mx = 0;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            if (!valid(i, j))
            {
                continue;
            }
            sum = 0;
            dfs(i, j);
            mx = max(mx, sum);
        }
    }
    cout << mx << nl;
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