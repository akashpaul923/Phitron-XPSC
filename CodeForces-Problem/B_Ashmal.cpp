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
    string s = "";
    for (int i = 0; i < n; i++)
    {
        string a;
        cin >> a;
        if (s.empty())
        {
            s = a;
        }
        else
        {
            string x = a + s;
            string y = s + a;
            s = min(x, y);
        }
    }
    cout << s << nl;
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
