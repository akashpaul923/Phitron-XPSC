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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n > 1)
    {
        int idx1 = -1, idx2 = -1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
                idx1 = i;
            if (a[i] == n)
                idx2 = i;
        }
        // if (idx1 > -1 && idx2 > -1)
        // {
        //     swap(a[idx1], a[idx2]);
        // }
        swap(a[idx1], a[idx2]);
    }
    for (auto vl : a)
    {
        cout << vl << " ";
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