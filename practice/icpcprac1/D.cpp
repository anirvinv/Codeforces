#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    ll sum = 0;
    int mx = -1;
    fo(i, n) {
        cin >> v[i];
        sum += v[i];
        mx = max(mx, (v[i]));
    }

    ll lo = mx - 1;
    ll hi = sum;
    ll mid = (lo + hi) / 2;
    while (hi - lo > 1) {
        ll steps = 0;
        ll capacity = mid;
        for (int i = 0; i < n; i++) {
            capacity = mid;
            int start = i;
            while (capacity > 0 && start < n) {
                if (capacity - v[start] >= 0) {
                    capacity -= v[start];
                } else {
                    break;
                }
                start++;
            }
            i = start - 1;
            steps++;
        }
        if (steps <= k) {
            hi = mid;
        } else {
            lo = mid;
        }
        mid = (lo + hi) / 2;
    }
    cout << hi << '\n';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    // cin >> t;
    t = 1;
    while (t--) {
        solve();
    }
}