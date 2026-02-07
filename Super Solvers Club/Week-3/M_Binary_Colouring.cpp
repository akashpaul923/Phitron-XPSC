#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'

void solve()    
{
    ll n, c = 0;
    cin >> n;
    vector<int> a(1000);
    while (n > 0)
    {
        if (n % 2 == 0)
        {
            a[c++] = 0;
            n /= 2;
        }
        else if (((n - 1) / 2) % 2 == 0)
        {
            a[c++] = 1;
            n = (n - 1) / 2;
        }
        else
        {
            a[c++] = -1;
            n = (n + 1) / 2;
        }
    }
    cout << c << nl;
    for (int i = 0; i < c; i++)
    {
        cout << a[i] << " ";
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