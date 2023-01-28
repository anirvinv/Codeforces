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
    string s;
    cin >> s;
    ll mp[10];
    FE(i, 1, 9) {
        G(x);
        mp[i] = x;
    }
    int ptr = -1;
    F(i, 0, n) {
        if (mp[s[i] - '0'] > s[i] - '0') {
            ptr = i;
            break;
        }
    }
    // debug(ptr);
    if (ptr != -1) {
        while (ptr < n && mp[s[ptr] - '0'] >= s[ptr] - '0') {
            s[ptr] = mp[s[ptr] - '0'] + '0';
            ptr++;
        }
    }
    cout << s << '\n';
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