#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"
 
void solve()
{
    int n, x, mn = INT_MAX, mx = INT_MIN;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        mn = min(mn, val);
        mx = max(mx, val);
    }
    cin >> x;
    if (x >= mn && x <= mx)
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