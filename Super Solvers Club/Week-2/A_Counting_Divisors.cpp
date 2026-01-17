#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int maxX = 1e6 + 9;
    vector<int> d(maxX, 0);
    for (int i = 1; i <= maxX; i++)
    {
        for (int j = i; j < maxX; j += i)
        {
            d[j]++;
        }
    }
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        cout << d[x] << nl;
    }

    return 0;
}