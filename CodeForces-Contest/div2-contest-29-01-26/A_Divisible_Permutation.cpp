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
    vector<int> ans(n + 1);
    int l = 1, r = n;
    for (int i = n; i > 0; i--)
    {
        if ((n - i) % 2 == 0)
        {
            ans[i] = l;
            l++;
        }
        else
        {
            ans[i] = r;
            r--;
        }
    }
    for (int i = 1; i <= n; i++)
        cout << ans[i] << " ";
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