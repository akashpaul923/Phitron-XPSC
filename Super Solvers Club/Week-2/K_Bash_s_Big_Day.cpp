#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int maxN = 1e5 + 9;
    vector<vector<int>> primes(maxN);
    for (int i = 2; i < maxN; i++)
    {
        if (primes[i].empty())
        {
            for (int j = i; j < maxN; j = j + i)
            {
                primes[j].push_back(i);
            }
        }
    }

    int n, a;
    cin >> n;
    map<int, int> cnt;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        for (auto val : primes[a])
        {
            cnt[val]++;
        }
    }
    int mx = 1;
    for (auto [key, value] : cnt)
    {
        mx = max(mx, value);
    }
    cout << mx << nl;

    return 0;
}