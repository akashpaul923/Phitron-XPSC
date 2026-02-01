#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

void solve()
{
    string w, s;
    cin >> w;
    int p;
    cin >> p;
    s = w;
    sort(s.begin(), s.end());
    map<char, int> cnt;
    for (auto c : s)
    {
        int x = (c - 'a') + 1;
        if (x <= p)
        {
            cnt[c]++;
            p -= x;
        }
    }
    for (auto c : w)
    {
        if (cnt[c] > 0)
        {
            cout << c;
            cnt[c]--;
        }
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