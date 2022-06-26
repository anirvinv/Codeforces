#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
void solve() {
    int n;
    cin >> n;
    vector<int> r(n);
    ll sum1 = 0;
    fo(i, n) { cin >> r[i]; }
    int m;
    cin >> m;
    vector<int> b(m);
    ll sum2 = 0;
    fo(i, m) { cin >> b[i]; }

    ll maxPref1 = 0;
    ll maxPref2 = 0;

    ll sum = 0;
    for (int i = 0; i < n; i++) {
        sum += r[i];
        maxPref1 = max(maxPref1, sum);
    }
    sum = 0;
    for (int i = 0; i < m; i++) {
        sum += b[i];
        maxPref2 = max(maxPref2, sum);
    }

    cout << maxPref2 + maxPref1 << '\n';
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