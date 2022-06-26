#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
typedef long double ld;
#define PI 3.141592653589793238
void solve() {
    ll n;
    cin >> n;
    // find radius and then diameter of the polygon
    ld sides = 2 * n;
    ld a = (PI / sides);
    // debug((a * 180.0 / PI));
    ld ans = tan(0.1);
    printf("%.9f\n", ans);
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