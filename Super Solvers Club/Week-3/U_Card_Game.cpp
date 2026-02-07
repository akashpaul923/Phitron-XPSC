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
    if (n == 2)
    {
        cout << ((s[0] == 'A') ? "Alice" : "Bob") << nl;
        return;
    }
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
            cnt1++;
        else
            cnt2++;
    }
    if (cnt1 == 1)
    {
        cout << "Bob" << nl;
        return;
    }
    if (cnt2 == 1)
    {
        cout << "Alice" << nl;
        return;
    }
    if ((s[0] == 'A' && s[n - 1] == 'A') || (s[n - 1] == 'A' && s[n - 2] == 'A'))
    {
        cout << "Alice" << nl;
        return;
    }
    cout << "Bob" << nl;
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