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
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    bool ok = false;
    for (int i = 1; i <= n; i++)
    {
        if (a[1] != a[i])
        {
            ok = true;
            break;
        }
    }
    if (!ok)
    {
        no;
        return;
    }
    yes;
    int city = -1;
    for (int i = 2; i <= n; i++)
    {
        if (a[i] != a[1])
        {
            cout << 1 << " " << i << nl;
            city = i;
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (a[i] == a[1])
        {
            cout << city << " " << i << nl;
        }
    }
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