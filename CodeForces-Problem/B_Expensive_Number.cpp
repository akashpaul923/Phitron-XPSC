#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

void solve()
{
    string s;
    cin >> s;
    int m = 0, cnt = 0, sz = s.size();
    for (int i = 0; i < sz; i++)
    {
        if (s[i] != '0')
        {
            m = i, cnt++;
        }
    }
    int q = 0;
    for (int i = m; i < sz; i++)
    {
        if (s[i] == '0')
            q++;
    }
    cout << cnt + q - 1 << nl;
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