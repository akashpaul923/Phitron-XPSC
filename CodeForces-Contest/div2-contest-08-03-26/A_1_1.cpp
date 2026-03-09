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
    string s;
    cin >> s;
    int cnt1 = 0, idxl = -1, idxr = -1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            cnt1++;
            if (idxl == -1)
                idxl = i;
            idxr = i;
        }
    }
    // cout << cnt1 << " " << idxl << " " << idxr << nl;
    int mx = 0;
    if (idxl != -1)
    {
        mx = idxr - idxl + 1;
    }
    // cout << mx << nl;
    int red = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (s[i - 1] == '1' && s[i] == '1' && s[i + 1] == '1')
            red++;
    }
    cout << cnt1 - red << " " << mx << nl;
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