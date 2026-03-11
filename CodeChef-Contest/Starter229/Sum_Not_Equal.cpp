#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    if (a[0] + a[1] != a[2])
        cout << 1 << " " << 2 << " " << 3 << nl;
    else if (a[1] + a[2] != a[0])
        cout << 2 << " " << 3 << " " << 1 << nl;
    else if (a[0] + a[2] != a[1])
        cout << 1 << " " << 3 << " " << 2 << nl;
    else
        cout << -1 << nl;
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