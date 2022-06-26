#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    int x;
    cin >> x;
    ll step = 1;
    while (step * (step + 1) < 2 * x) {
        step++;
    }
    if ((step * (step + 1)) / 2 == x + 1) step++;
    cout << step << '\n';
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