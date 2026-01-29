#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bool ok = false;
    for (int m = 0; m < (1 << n); m++)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if ((m >> i) & 1)
                sum += a[i];
            else
                sum -= a[i];
        }
        if (sum % 360 == 0)
        {
            ok = true;
            break;
        }
    }
    ok ? yes : no;

    return 0;
}