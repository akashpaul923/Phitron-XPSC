#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

const int N = 2e5;
vector<int> b[N];
string s;
bool visited[N];
int ans = 0;

int dfs(int vertex)
{
    visited[vertex] = true;
    int val;
    if (s[vertex - 1] == 'W')
        val = 1;
    else
        val = -1;
    for (int child : b[vertex])
    {
        if (visited[child])
            continue;
        val = val + dfs(child);
    }
    if (val == 0)
        ans++;
    return val;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n - 1);
    ans = 0;
    for (int i = 1; i <= n; i++)
    {
        b[i].clear();
        visited[i] = false;
    }
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a[i];
        b[a[i]].push_back(i + 2);
        b[i + 2].push_back(a[i]);
    }
    cin >> s;
    dfs(1);
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