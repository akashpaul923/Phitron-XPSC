#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

void solve()
{
    int n;
    cin >> n;
    deque<int> dq;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        dq.push_back(x);
    }
    sort(dq.begin(), dq.end());
    int cnt = 0;
    while (dq.size() > 1)
    {
        int a = dq.back();
        dq.pop_back();
        int b = dq.back();
        dq.pop_back();
        if (a == b)
        {
            dq.push_front(0);
        }
        else
        {
            dq.push_back(b);
            cnt++;
        }
    }
    cout << cnt + dq.size() << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
