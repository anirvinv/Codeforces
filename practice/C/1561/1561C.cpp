#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    int n;
    cin >> n;
    vector<pair<vector<ll>, ll>> arr;
    fo(i, n) {
        ll k;
        cin >> k;
        vector<ll> a(k);
        ll mp = -1;
        ll fp = 0;

        fo(j, k) {
            cin >> a[j];
            mp = max({mp, a[j] - j + 1, 0ll});
        }
        arr.push_back(make_pair(a, mp));
    }
    for (auto a : arr) {
        cout << a.second << '\n';
    }
    ll dp[n];
    ll min_power = arr[0].second;
    dp[0] = min_power;
    ll elements = arr[0].first.size();
    ll final_power = dp[0] + elements;

    for (ll i = 1; i < n; i++) {
        min_power = arr[i].second;
        if (final_power < min_power) {
            dp[i] = min_power;
            elements += arr[i].first.size();
        } else {
            if ((min_power + arr[i].first.size()) >= dp[i - 1]) {
                if (min_power < dp[i - 1]) {
                    dp[i] = min_power;
                } else {
                    dp[i] = dp[i - 1];
                }
            } else {
                dp[i] = dp[i - 1];
            }
            elements += arr[i].first.size();
        }
        final_power = dp[i - 1] + elements;
        // debug(min_power);
        // debug(dp[i]);
        // debug(final_power);
    }
    cout << dp[n - 1] << '\n';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    // t= 1;
    while (t--) {
        solve();
    }
}