#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) \
    ll x;    \
    cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    G(n);
    vector<ll> arr(n);
    F(i, n) { G(x) arr[i] = x; }
    sort(all(arr));
    int ptr1 = 2;
    int ptr2 = n - 3;
    ll red = arr[n - 1];
    ll blue = arr[0] + arr[1];
    if (red > blue) {
        cout << "YES" << '\n';
        return;
    }
    while (ptr1 < ptr2 && red <= blue) {
        red += arr[ptr2];
        blue += arr[ptr1];
        ptr1++;
        ptr2--;
    }
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