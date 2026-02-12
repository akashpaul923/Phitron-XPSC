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
    vector<int> a(n), p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> cnt(n + 1);
    for (int i = 0; i < n; i++)
    {
        cnt[p[i]] = i;
    }
    for (int i = 1; i < n; i++)
    {
        if (cnt[a[i]] < cnt[a[i - 1]])
        {
            no;
            return;
        }
    }
    yes;
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