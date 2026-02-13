#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve()
{
    string p, s;
    cin >> p >> s;
    int n = p.size(), m = s.size();
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (p[i] != s[j])
        {
            no;
            return;
        }
        int st = i;
        while (i < n && p[i] == p[st])
        {
            i++;
        }
        int len1 = i - st;
        st = j;
        while (j < m && s[j] == s[st])
        {
            j++;
        }
        int len2 = j - st;
        if (len1 > len2 || len2 > 2 * len1)
        {
            no;
            return;
        }
    }
    if (i == n && j == m)
        yes;
    else
        no;
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