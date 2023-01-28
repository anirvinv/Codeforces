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

bool f(vector<ll>& a, ll n, ll m, ll k) {
    bool works = 1;
    // filling column wise
    // m cols, n per col
    ll cols = m;
    if (cols % 2 == 0) {
        F(i, 0, k) {
            if ((a[i] / n) >= 2) {
                cols -= (a[i] / n);
            }
        }
        if (cols <= 0) return true;
    }
    else {
        if (a[0] < 3 * n) return false;
        F(i, 0, k) {
            if ((a[i] / n) >= 2) {
                cols -= (a[i] / n);
            }
        }
        if (cols <= 0) return true;
    }
    return false;
}

void solve() {
    G(n) G(m) G(k);
    vector<ll> a(k);
    F(i, 0, k) cin >> a[i];
    sort(all(a));
    reverse(all(a));
    bool works = f(a, n, m, k) || f(a, m, n, k);
    if (works) cout << "Yes\n";
    else cout << "No\n";
    /*
    Solution:
        You can only fill all row wise or col wise.
        Assuming you are filling col wise(same applies to col wise):
        If a color is being used, there must be
        atleast two cols of it available. Fill >= 2 cols of it.
        Move on to next color. If only one col is avail, then dont fill using it.
        For even num of cols:
            every color filled must have >= 2 cols.
        For odd num of cols:
            There must be one color that can be used
            to fill >= 3 cols and rest >= 2 cols.
            This is because it wouldn't work otherwise.
        If final cols result is negative, you can just "remove" those cols.

    Why did it take 4 attempts?
        Because I did not think first, I jumped straight to code.
        For some reason, I was thinking that the only possible way to
        fill even is: e e e e e.. and only way to fill odd cols is:
        o e e e e ... Didn't think of this shit first.
        Counter example to even # of cols is: you can do 5 and
        3 for 8 cols andit would still work. I just didn't think of it immediately
        and I don't understand why. hmm...Jumping into code was the problem?
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