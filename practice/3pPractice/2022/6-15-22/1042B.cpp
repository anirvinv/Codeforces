#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
#define F(i,L,R) for (int i = (L); i < (R); i++)
#define FE(i,L,R) for (int i = (L); i <= (R); i++)
#define FF(i,L,R) for (int i = (L); i > (R); i--)
#define FFE(i,L,R) for (int i = (L); i >= (R); i--)
#define G(x) ll x; cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
#define MOD 1000000007 //998244353
void solve() {
    G(n);
    vector<pair<string, ll>> c(n);
    F(i, 0, n) {
        G(p);
        string s;
        cin >> s;
        if (s.length() == 3) {
            s = "ABC";
        }
        else if (s.length() == 2) {
            if (s == "BA") {
                s = "AB";
            }
            else if (s == "CA") {
                s = "AC";
            }
            else if (s == "CB") {
                s = "BC";
            }
        }
        c[i] = { s,p };
    }
    bool a = 0, b = 0, cb = 0;
    for (auto p : c) {
        for (char ch : p.first) {
            if (ch == 'A') {
                a = 1;
            }
            else if (ch == 'B') {
                b = 1;
            }
            else {
                cb = 1;
            }
        }
    }
    if (!(a && b && cb)) {
        cout << -1 << '\n';
        return;
    }
    ll ans = LLONG_MAX;
    map<string, ll> pr;
    for (auto p : c) {
        if (!pr[p.first]) {
            pr[p.first] = p.second;
        }
        else {
            pr[p.first] = min(pr[p.first], p.second);
        }
    }
    vector<vector<string>> works = { {"ABC"},{"AB", "BC"},{"AC","BC"},{"AC","AB"}, {"AB", "C"}, {"AC", "B"}, {"BC", "A"}, {"A","B","C"} };
    for (vector<string> p : works) {
        ll sum = 0;
        for (string e : p) {
            if (pr[e] == 0) {
                sum = -1;
                break;
            }
            sum += pr[e];
        }

        if (sum != -1) {
            ans = min(ans, sum);
        }
    }
    cout << ans << '\n';

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    // cin >> t;
    t = 1;
    while (t--) {
        solve();
    }
}