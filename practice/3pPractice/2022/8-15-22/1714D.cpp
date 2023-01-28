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
    string t; cin >> t;
    G(n);
    vector<string> s(n);
    F(i, 0, n) cin >> s[i];
    ll rs = 0;
    // rs = length of prefix thats red
    ll lp = 0;
    // length of to-be-explored prefix
    vector<pll> ans;
    while (rs < t.length()) {
        // max length
        ll ml = 0;
        // word index
        ll w = -1;
        // start of text t to color
        ll pl = -1;
        FE(tp, 0, lp) {
            // iterate [0,lp] 
            F(si, 0, n) {
                // which covers max length prefix
                if (find(all(ans), (pll) { si + 1, tp + 1 }) == ans.end() && s[si] == t.substr(tp, s[si].length())) {
                    if (ml < s[si].length() + tp - lp) {
                        ml = s[si].length() + tp - lp;
                        w = si;
                        pl = tp;
                    }
                }
            }
        }
        if (w == -1) {
            cout << "-1\n";
            return;
        }
        rs += ml;
        lp += ml;
        ans.push_back({ w + 1,pl + 1 });
    }
    cout << ans.size() << '\n';
    for (pll p : ans) {
        cout << p.first << " " << p.second << '\n';
    }

    /*
    Solution:
        Check longest to shortest prefix. Choose the longest prefix that exists in vector s,
        then search every prefix starting from every letter in the found prefix
        and one letter after the found prefix and chose the longest one that exists in s.
        Repeat until the whole string is colored red. If a prefix is not found, then output -1.

    Reflection:
        My first instinct was to sort of do the opposite of what the solution says. Instead of
        finding the prefixes, my approach was to sort the word list by length and then go through
        the word with longest to shortest. THis doesnt really work, theres a counter example
        in the test cases. The solution approach works because first of all, if an answer exists,
        then the "prefix chaining" thing has to happen becase thats the only way an answer can exist.
        And using this prefix chaining, we just have to pick the longest extension of our coloring
        each time.
        Coding this was really difficult for 2 reasons:
            1. Keeping track of indices
            2. I can't see cpp errors
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