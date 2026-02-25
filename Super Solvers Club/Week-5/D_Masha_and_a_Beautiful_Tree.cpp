#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

int ans = 0;

bool ok(vector<int> &v, int mid, int s)
{
    for (int i = s; i <= mid; i++)
    {
        if (v[i] > mid)
            return false;
    }
    return true;
}

void func(vector<int> &v, int s, int e)
{
    if (s == e)
    {
        return;
    }

    int mid = (s + e) / 2;

    if (!ok(v, mid, s))
    {
        ans++;
        int i = s, j = 1;
        while (i <= mid)
        {
            swap(v[i], v[mid + j]);
            i++, j++;
        }
    }
    func(v, s, mid);
    func(v, mid + 1, e);
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    ans = 0;
    func(v, 1, n);
    bool flag = true;
    for (int i = 1; i <= n; i++)
    {
        if (v[i] != i)
        {
            flag = false;
            break;
        }
    }
    cout << (flag ? ans : -1) << nl;
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