#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(k);
    for (int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        a[i] = n - x;
    }
    sort(a.begin(), a.end());
    int t = 0, s = 0;
    for (auto d : a)
    {
        if (t + d < n)
        {
            t += d;
            s++;
        }
        else
        {
            break;
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
