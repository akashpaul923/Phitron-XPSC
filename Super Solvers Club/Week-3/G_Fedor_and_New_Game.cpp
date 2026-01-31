#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

bool kth_bit_on(int n, int k)
{
    return ((n >> k) & 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(m);
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    int x, ans = 0;
    cin >> x;
    for (int i = 0; i < m; i++)
    {
        int cnt = 0;
        for (int j = 0; j <= n; j++)
        {
            if (kth_bit_on(x, j) && !kth_bit_on(a[i], j))
            {
                cnt++;
            }
            if (!kth_bit_on(x, j) && kth_bit_on(a[i], j))
            {
                cnt++;
            }
        }
        if (cnt <= k)
        {
            ans++;
        }
    }
    cout << ans << nl;

    return 0;
}