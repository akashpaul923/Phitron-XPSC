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

void solve()
{
    int x;
    cin >> x;
    int msb = __lg(x), b = (1 << msb), a = (x ^ b), sum = b, cnt = 0;
    for (int k = 0; k <= msb; k++)
    {
        if (!kth_bit_on(a, k) && !kth_bit_on(b, k) && (sum + (1 << k) <= x))
        {
            cnt++;
            sum += (1 << k);
        }
    }
    cout << (1 << cnt) << nl;
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