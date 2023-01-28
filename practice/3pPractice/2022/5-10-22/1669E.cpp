#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) ll x; cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {

    G(n);
    vector<string> g(n);
    map<string, ll> oc;
    F(i, n) {
        cin >> g[i];
        oc[g[i]]++;
    }
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        string s = g[i];
        // iterate over second char
        string c = "--";
        c[0] = s[0];
        for (int j = 'a'; j <= 'k'; j++) {
            if (s[1] != j) {
                c[1] = (char)(j);
                ans += oc[c];
            }
        }

        // iterate over first char
        c[0] = '-';
        c[1] = s[1];
        for (int j = 'a'; j <= 'k'; j++) {
            if (s[0] != j) {
                c[0] = (char)(j);
                ans += oc[c];
            }
        }
    }
    cout << ans / 2 << '\n';


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