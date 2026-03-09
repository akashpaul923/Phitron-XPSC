#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n, m, l;
        cin >> n >> m >> l;

        vector<long long> a(n);
        for (auto &x : a) cin >> x;

        auto ok = [&](long long x) {
            vector<long long> need;

            for (long long ai : a) {
                long long v = max(0LL, (l - ai) - x);
                need.push_back(v);
            }

            sort(need.rbegin(), need.rend());

            long long sum = 0;
            for (int i = 0; i < min((long long)need.size(), m); i++)
                sum += need[i];

            return sum <= l;
        };

        long long lo = 0, hi = l, ans = l;

        while (lo <= hi) {
            long long mid = (lo + hi) / 2;
            if (ok(mid)) {
                ans = mid;
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }

        cout << ans << "\n";
    }
}