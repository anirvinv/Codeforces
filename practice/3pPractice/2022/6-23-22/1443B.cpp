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
    G(a) G(b);
    string s;
    cin >> s;
    int n = s.length();
    string ns = "";
    F(i, 0, n) {
        if (s[i] == '1') {
            ns.push_back('1');
            int ptr = i;
            while (ptr < n && s[ptr] == '1') {
                ptr++;
            }
            i = ptr - 1;
        }
        else {
            ns.push_back('0');
        }
    }
    vector<ll> idx;
    F(i, 0, ns.length()) {
        if (ns[i] == '1') {
            idx.push_back(i);
        }
    }
    if (idx.size() <= 1) {
        cout << idx.size() * a << '\n';
        return;
    }
    ll curr = a;
    // activate the first bomb
    bool activated = 1;
    F(i, 0, idx.size() - 1) {
        ll zeroes = (idx[i + 1] - idx[i] - 1);
        // do you want to connect to last segment or not?
        if (!activated) {
            curr += a;
            activated = 1;
        }
        if (curr + zeroes * b < curr + a) {
            curr += zeroes * b;
        }
        else {
            activated = 0;
        }
    }
    if (!activated) {
        curr += a;
    }
    cout << curr << '\n';

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