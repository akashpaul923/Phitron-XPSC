#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"
vector<int> a(3009, 0);

void sieve(int n)
{
    for (int i = 2; i < n + 2; i++)
    {
        if (a[i] == 0)
        {
            a[i]++;
            for (int j = i * 2; j < n + 2; j += i)
            {
                a[j]++;
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
    sieve(n);
    int cnt = 0;
    for (int i = 0; i <= n; i++)
    {
        if (a[i] == 2)
            cnt++;
    }
    cout << cnt;

    return 0;
}