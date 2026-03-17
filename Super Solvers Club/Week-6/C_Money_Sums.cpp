#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

const int N = 1e2 + 9, M = 1e5 + 9;
int n, a[N], dp[N][M];

int func(int i, int sum)
{
    if (i > n)
    {
        return (sum == 0);
    }
    if (dp[i][sum] != -1)
    {
        return dp[i][sum];
    }
    int ans = 0;
    if (a[i] <= sum)
    {
        ans += func(i + 1, sum - a[i]);
    }
    ans += func(i + 1, sum);
    return dp[i][sum] = ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            dp[i][j] = -1;
        }
    }
    vector<int> ans;
    for (int targetSum = 1; targetSum <= sum; targetSum++)
    {
        if (func(1, targetSum))
        {
            ans.push_back(targetSum);
        }
    }
    cout << ans.size() << nl;
    for (auto value : ans)
    {
        cout << value << " ";
    }
    cout << nl;

    return 0;
}