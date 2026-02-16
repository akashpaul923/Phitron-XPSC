#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"

bool bad(int x, int y)
{
    return (x == y || x + y == 7);
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int cnt = 0;
    for (int i = 1; i < n; i++)
    {
        if (bad(a[i - 1], a[i]))
        {
            cnt++;
            for (int j = 1; j <= 6; j++)
            {
                if (!bad(a[i - 1], j))
                {
                    a[i] = j;
                    break;
                }
            }
        }
    }
    cout << (cnt == 0 ? 0 : cnt - 1) << nl;
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