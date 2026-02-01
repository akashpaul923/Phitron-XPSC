#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'

ll n;
vector<ll> v;

void luckyFind(ll x)
{
    if (x > n)
        return;
    v.push_back(x);
    luckyFind(x * 10 + 4);
    luckyFind(x * 10 + 7);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    luckyFind(0);
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == n)
        {
            cout << i << nl;
            break;
        }
    }

    return 0;
}