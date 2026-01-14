#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int count = 0;
    bool isWear = false;
    for (int t : v)
    {
        if (isWear)
        {
            if (t > b)
            {
                isWear = false;
            }
        }
        else
        {
            if (t < a)
            {
                isWear = true;
                count++;
            }
        }
    }
    cout << count << nl;
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