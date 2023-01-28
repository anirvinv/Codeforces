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
    G(n) G(W);
    vector<pll> w(n);
    F(i, 0, n) {
        G(x);
        w[i] = { x,i };
    }
    sort(all(w));
    queue<pll> q;
    ll total = 0;
    ll ptr = 0;
    while (ptr < n && total < (W + 1) / 2) {
        if (total + w[ptr].first > W) {
            if (!q.empty()) {
                total -= q.front().first;
                q.pop();
            }
            else { break; }
        }
        else {
            q.push(w[ptr]);
            total += w[ptr].first;
            ptr++;
        }
    }
    if (total >= (W + 1) / 2) {
        cout << q.size() << '\n';
        while (!q.empty()) {
            cout << q.front().second + 1 << " ";
            q.pop();
        }
        cout << '\n';
        return;
    }
    cout << "-1\n";


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