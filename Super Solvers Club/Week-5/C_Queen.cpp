#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

const int N = 100005;
int c[N];
bool child[N];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int p, val;
        cin >> p >> val;

        c[i] = val;

        if (p != -1 && val == 0)
        {
            child[p] = true;
        }
    }

    bool found = false;

    for (int i = 1; i <= n; i++)
    {
        if (c[i] == 1 && !child[i])
        {
            cout << i << " ";
            found = true;
        }
    }

    if (!found)
    {
        cout << -1;
    }
    cout << nl;

    return 0;
}