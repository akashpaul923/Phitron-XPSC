#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"
const int maxN = 1e5 + 9;
vector<bool> primes(maxN, true);

void sieve(int n)
{
    primes[0] = primes[1] = false;
    for (int i = 2; i * i < n; i++)
    {
        if (primes[i])
        {
            for (int j = i * i; j < n; j += i)
            {
                primes[j] = false;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    sieve(n + 5);
    cout << (n <= 2 ? 1 : 2) << nl;
    for (int i = 2; i < n + 2; i++)
    {
        cout << (primes[i] ? 1 : 2) << " ";
    }

    return 0;
}