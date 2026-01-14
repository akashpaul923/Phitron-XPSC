#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, int> mp;
    for (auto c : s)
    {
        mp[c]++;
    }
    int dbl = 0;
    for (auto [key, value] : mp)
    {
        if (value >= 3)
        {
            no;
            return;
        }
        else if (value == 2)
        {
            dbl++;
        }
    }
    if (dbl > n / 2)
    {
        no;
        return;
    }
    yes;
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