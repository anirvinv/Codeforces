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
bool f(vector<ll>& a) {
    F(i, 0, a.size() - 1) {
        if (a[i] > a[i + 1]) return false;
    }
    return true;
}
void solve() {
    G(n);
    vector<ll> a(n);
    vector<ll> b(n);
    F(i, 0, n) {
        cin >> a[i];
    }
    bool zeroes = false;
    bool ones = false;
    F(i, 0, n) {
        cin >> b[i];
        ones |= b[i] == 1;
        zeroes |= b[i] == 0;
    }
    if (ones && zeroes) {
        cout << "Yes\n";
    }
    else {
        if (f(a)) {
            cout << "Yes\n";
        }
        else {
            cout << "No\n";
        }
    }

    /*
    Solution:
        You can swap any 0s with 1s. But if there is atleast 1 zero and 1 one present, then the whole thing is sortable.
        Proof:
            0 1a 1b
            1b 1a 0
            1b 0 1a
            0 1b 1a.
            Therefore, you can swap any two elements using the opposite parity as an intermediate element.
            By symetry, the same goes for 1 0a 0b --> 1 0b 0a.
        So it is only sortable if there is atleast 1 zero and 1 one present, or if the list is already sorted.

    Reflection:
        Pretty well thought out solution. No guessing at all. "Intermediate element" thing was prior experience that came in handy. Nice
    */
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