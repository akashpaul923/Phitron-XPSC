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

    int n;
    cin >> n;
    int t = n / 2;
    cout << t << nl;
    for (int i = 0; i < t - 1; i++)
    {
        cout << 2 << " ";
    }
    cout << (n % 2 ? 3 : 2) << nl;

    return 0;
}