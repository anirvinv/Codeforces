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
    vector<ll> pf;
    ll sn = n;
    ll temp = n;
    bool prime = false;
    F(j, 0, 10) {
        temp = n;
        FE(i, 2, sqrt(n) + 1) {
            while (n % i == 0) {
                n /= i;
                pf.push_back(i);
            }
        }
        if (n == temp) { prime = true; break; }
    }

    if (prime) {
        pf.push_back(n);
    }
    else {
        ll last = pf.back();
        FE(i, last, (n + 1) / 2) {
            while (n % i == 0) {
                n /= i;
                pf.push_back(i);
            }
        }
    }
    map<ll, ll> count;
    for (ll e : pf) {
        count[e]++;
    }
    pll nump = *count.begin();
    for (auto p : count) {
        if (p.second > nump.second) {
            nump = p;
        }
    }
    vector<ll> ans;
    F(i, 0, nump.second - 1) {
        ans.push_back(nump.first);
        sn /= nump.first;
    }
    ans.push_back(sn);
    cout << ans.size() << '\n';
    for (ll e : ans) {
        cout << e << " ";
    }
    cout << '\n';
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