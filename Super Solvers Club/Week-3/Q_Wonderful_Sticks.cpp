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
    vector<int> ans(n);
    int sm = 1, lg = n;
    for (int i = n - 1; i > 0; i--)
    {
        if (s[i - 1] == '<')
            ans[i] = sm++;
        else
            ans[i] = lg--;
    }
    ans[0] = sm;
    for (auto a : ans)
        cout << a << " ";
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