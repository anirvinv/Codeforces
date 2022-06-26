#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    int n;
    cin >> n;
    int a, va;
    cin >> a >> va;
    int c, vc;
    cin >> c >> vc;
    int b;
    cin >> b;
    double slope = (double)(va - vc) / (double)(a - c);
    int ans = slope * (b - a) + va;
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
