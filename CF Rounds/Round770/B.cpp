#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    ll n, x, y;
    cin >> n >> x >> y;
    vector<ll> arr(n);
    fo(i, n) cin >> arr[i];
    ll alice = x;

    vector<ll> prefsum(n);
    vector<ll> suffxor(n);

    ll sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        prefsum[i] = sum;
    }
    ll xr = 0;
    for (int i = n - 1; i >= 0; i--) {
        xr ^= arr[i];
        suffxor[i] = xr;
    }

    for (int i = 0; i < n - 1; i++) {
        if (((alice + prefsum[i]) ^ suffxor[i + 1]) == y) {
            cout << "Alice" << '\n';
            return;
        }
    }

    // suffixsum, prefixor

    vector<ll> prefxor(n);
    vector<ll> suffsum(n);
    xr = 0;
    for (int i = 0; i < n; i++) {
        xr ^= arr[i];
        prefxor[i] = xr;
    }
    sum = 0;
    for (int i = n - 1; i >= 0; i--) {
        sum += arr[i];
        suffsum[i] = sum;
    }

    for (int i = 0; i < n - 1; i++) {
        if (((alice ^ prefxor[i]) + suffsum[i + 1]) == y) {
            cout << "Alice" << '\n';
            return;
        }
    }

    if ((alice + prefsum[n - 1]) == y || (alice ^ suffxor[0]) == y) {
        cout << "Alice" << '\n';
        return;
    }
    cout << "Bob" << '\n';
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