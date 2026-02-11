#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'

void solve()
{
    int n, x;
    cin >> n;
    vector<int> p((2 * n) + 9);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> x;
            p[i + j + 1] = x;
        }
    }
    int sum = 0;
    for (int i = 0; i < 2 * n; i++)
    {
        sum += p[i];
    }
    p[0] = (n * (2 * n + 1)) - sum;
    for (int i = 0; i < 2 * n; i++)
    {
        cout << p[i] << " ";
    }
    cout << nl;
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