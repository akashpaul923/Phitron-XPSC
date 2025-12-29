#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int r, b;
    cin >> r >> b;
    int g = r < b ? b - (b - r) : r - (r - b);
    r -= g, b -= g;
    int ans = (g * 5) + (b * 2) + r;
    cout << ans;

    return 0;
}