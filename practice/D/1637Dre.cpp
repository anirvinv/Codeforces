#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'

void swap(ll& a, ll& b) {
    ll temp = a;
    a = b;
    b = temp;
}

ll bCost(vector<ll> a, vector<ll> b) {
    ll s1 = 0;
    for (int i = 0; i < a.size(); i++) {
        s1 += a[i];
    }
    ll s2 = 0;
    for (int i = 0; i < a.size(); i++) {
        s2 += b[i];
    }
    return s1 * s1 + s2 * s2;
}

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> b(n);
    fo(i, n) { cin >> a[i]; }
    fo(i, n) { cin >> b[i]; }
    // initialize the basic cost
    ll cost = 0;

    cout << cost << '\n';
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