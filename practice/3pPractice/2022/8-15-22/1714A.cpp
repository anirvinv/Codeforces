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
    G(n) G(H) G(M);
    vector<pll> alarms;
    F(i, 0, n) {
        G(h) G(m);
        alarms.push_back({ h,m });
    }
    sort(all(alarms));
    pll nxt = { -1,-1 };
    F(i, 0, n) {
        if (alarms[i].first > H || (alarms[i].first == H && alarms[i].second >= M)) {
            nxt = alarms[i];
            break;
        }
    }
    ll mins = 0;
    if (nxt.first == -1) {
        mins = (24 * 60 - (H * 60 + M)) + (alarms[0].first * 60 + alarms[0].second);
    }
    else {
        mins = nxt.first * 60 + nxt.second - (H * 60 + M);
    }
    cout << mins / 60 << " " << mins - (60 * (mins / 60)) << '\n';
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