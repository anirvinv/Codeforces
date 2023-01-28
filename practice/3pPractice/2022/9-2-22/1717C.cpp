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
    vector<ll> a(n);
    vector<ll> b(n);
    F(i, 0, n) {
        cin >> a[i];
    }
    bool failed = 0;
    F(i, 0, n) {
        cin >> b[i];
        if (b[i] < a[i]) failed = 1;
    }
    if (failed) {
        cout << "NO\n";
        return;
    }
    F(i, 0, n) {
        if (i == n - 1) {
            if (!(a[i] == b[i] || b[i] <= b[0] + 1)) {
                cout << "NO\n";
                return;
            }
        }
        else {
            if (!(a[i] == b[i] || b[i] <= b[i + 1] + 1)) {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
    /*
    Solution:
        Basically, for every i, a_i == b_i or if it doesnt, b_i <= b_(i+1) + 1. This works because, if a_i == b_i,
        then nothing changed. But if it doesnt, then b_i must be greater than a_i because you can only increment. Moreover,
        you can only increment a_i to a_(i+1) + 1. But you can do the same ot a_(i+1). So you check every element in b and if
        it doesn't match, then wrong.

    Reflection:
        I kinda did it myself and kinda didnt. I think the most important thing is, solutions to most problems
        are actually simple. So think simple first. Also, the thought process to get to this is basically first look for
        a linear solution. And then make sure every b_i >= a_i. And then think wait there must be more. If its greater, then it also
        must be less than the next one because of the defined condition. From there, you get the solution.
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