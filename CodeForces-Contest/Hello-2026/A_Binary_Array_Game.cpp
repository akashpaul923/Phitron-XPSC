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
    // int cnt0 = 0, cnt1 = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     if (x % 2)
    //         cnt1++;
    //     else
    //         cnt0++;
    // }
    // cout << (cnt1 >= cnt0 ? "Alice" : "Bob") << nl;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (a.front() == 1 || a.back() == 1)
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