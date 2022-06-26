#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> b(n);

    fo(i, n) { cin >> a[i]; }
    fo(i, n) { cin >> b[i]; }
    vector<pair<int, int>> p(n);
    fo(i, n) { p[i] = make_pair(a[i], b[i]); }
    sort(all(p));
    fo(i, n) {
        if (p[i].first <= k) {
            k += p[i].second;
        }
    }
    cout << k << '\n';
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