#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"
const int maxN = 1e7;
vector<bool> isPrime(maxN + 9, true);
vector<int> primes;

void sieve()
{
    for (int i = 2; i * i <= maxN; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= maxN; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    for (int i = 2; i <= maxN; i++)
    {
        if (isPrime[i])
        {
            primes.push_back(i);
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    ll ans = 0;
    for (int prime : primes)
    {
        if (prime > n)
            break;
        ans += (n / prime);
    }
    cout << ans << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve();

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}