#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        st.insert(a[i]);
    }
    int mex = 0;
    while (st.count(mex))
    {
        mex++;
    }
    mex = min(mex, k - 1);
    cout << mex << nl;
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