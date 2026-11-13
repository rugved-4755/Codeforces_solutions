#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k, q;
        cin >> n >> k >> q;

        long long ans = 0;
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if (x <= q) {
                cnt++;

                if (cnt >= k) {
                    ans += cnt - k + 1;
                }
            } else {
                cnt = 0;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
