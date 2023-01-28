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
    G(x);
    G(a) G(b) G(c);
    int d[3];
    x--;
    d[0] = a - 1;
    d[1] = b - 1;
    d[2] = c - 1;
    ll curr = x;
    int count = 0;
    while (curr != -1) {
        curr = d[curr];
        count++;
    }
    if (count == 3) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
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