#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mn = min(a[i], mn);
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == mn)
            cnt++;
    }
    if (cnt == 1)
    {
        yes;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] % mn != 0)
        {
            yes;
            return;
        }
    }
    no;
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