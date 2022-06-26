#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    int n;
    cin >> n;
    vector<ll> arr(n);
    fo(i, n) cin >> arr[i];
    ll sum = 0;
    ll evens = 0;
    ll odds = 0;
    ll ans = 0;
    bool ones = true;
    for (int i = 1; i < n - 1; i++) {
        evens += (arr[i] % 2 == 0);
        odds += (arr[i] % 2 == 1);
        sum += arr[i];
        ones &= (arr[i] == 1);
    }
    if (ones || (n == 3 && arr[1] % 2 == 1)) {
        cout << -1 << '\n';
        return;
    }
    ans = (odds + 1) / 2;
    ans += sum / 2;
    cout << ans << '\n';
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