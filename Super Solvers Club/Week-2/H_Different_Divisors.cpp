#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

const int maxN = 30005;
vector<bool> prime(maxN + 5, true);

void sieve()
{
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= maxN; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= maxN; j += i)
            {
                prime[j] = false;
            }
        }
    }
}

void solve()
{
    int d;
    cin >> d;
    ll a = 0, b = 0;

    for (int i = d + 1; i <= maxN; i++)
    {
        if (prime[i])
        {
            a = i;
            break;
        }
    }

    for (int i = a + d; i <= maxN; i++)
    {
        if (prime[i])
        {
            b = i;
            break;
        }
    }

    cout << a * b << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve();

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
