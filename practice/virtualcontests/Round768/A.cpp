#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void swap(ll &a, ll &b) {
    ll temp = a;
    a = b;
    b = temp;
}
void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> b(n);
    fo(i, n) { cin >> a[i]; }
    fo(i, n) { cin >> b[i]; }

    fo(i, n) {
        if (a[i] > b[i]) {
            swap(a[i], b[i]);
        }
    }
    ll maxA = -1;
    ll maxB = -1;
    fo(i, n) {
        maxA = max(maxA, a[i]);
        maxB = max(maxB, b[i]);
    }
    cout << maxA * maxB << '\n';
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