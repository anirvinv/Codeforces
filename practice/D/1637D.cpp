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
    pair<int, ll> swapCost = make_pair(-1, bCost(a, b));
    if (n > 1) {
        while (true) {
            bool found = false;
            for (int i = 0; i < n; i++) {
                // check cost for each swap
                swap(a[i], b[i]);
                ll nCost = bCost(a, b);
                swap(a[i], b[i]);
                if (nCost < swapCost.second) {
                    swapCost.first = i;
                    swapCost.second = nCost;
                    found = true;
                }
            }
            if (found) {
                swap(a[swapCost.first], b[swapCost.first]);
            } else {
                break;
            }
        }

        for (int i = 0; i < n; i++) {
            swapCost.second += (n - 2) * (a[i] * a[i] + b[i] * b[i]);
        }
    } else {
        swapCost.second = 0;
    }
    // for (int i = 0; i < n; i++) {
    //     cout << a[i] << " ";
    // }
    // cout << '\n';
    // for (int i = 0; i < n; i++) {
    //     cout << b[i] << " ";
    // }
    // cout << '\n';
    cout << swapCost.second << '\n';
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