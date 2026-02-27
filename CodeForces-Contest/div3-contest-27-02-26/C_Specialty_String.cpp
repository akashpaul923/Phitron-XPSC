#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    stack<char> st;
    for (char c : s)
    {
        if (!st.empty() && st.top() == c)
            st.pop();
        else
            st.push(c);
    }
    if (st.empty())
        yes;
    else
        no;
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