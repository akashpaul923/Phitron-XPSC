#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll k, n;
    cin >> k >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    auto ok = [&](ll mid)
    {
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += min(a[i], mid);
        }
        return sum >= mid * k;
    };

    ll l = 0, r = 1e17, mid;
    while (r > l + 1)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
            l = mid;
        else
            r = mid;
    }
    cout << l;

    return 0;
}
