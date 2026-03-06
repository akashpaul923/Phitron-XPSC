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
    map<char, int> freq;
    vector<string> store(k);
    vector<vector<bool>> arr(n, vector<bool>(26, false));
    for (int i = 0; i < k; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < n; j++)
        {
            arr[j][s[j] - 'a'] = true;
        }
    }
    for (int d = 1; d <= n; d++)
    {
        if (n % d == 0)
        {
            string pattern = "";
            bool ans = true;
            for (int j = 0; j < d; j++)
            {
                char c = '@';
                for (int i = 0; i < 26; i++)
                {
                    bool possible = true;
                    for (int ck = j; ck < n; ck += d)
                    {
                        if (!arr[ck][i])
                        {
                            possible = false;
                            break;
                        }
                    }
                    if (possible)
                    {
                        c = (char)('a' + i);
                        break;
                    }
                }
                if (c == '@')
                {
                    ans = false;
                    break;
                }
                pattern += c;
            }
            if (ans)
            {
                string result = "";
                for (int i = 0; i < n / d; i++)
                {
                    result += pattern;
                }
                cout << result << "\n";
                break;
            }
        }
    }
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