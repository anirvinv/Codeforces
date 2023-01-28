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
bool valid(string s) {
    stack<char> a;
    F(i, 0, s.length()) {
        if (s[i] == '(') {
            a.push(s[i]);
        }
        else {
            if (!a.size()) return false;
            else a.pop();
        }
    }
    return a.size() == 0;
}
void swap(char& a, char& b) {
    char temp = a;
    a = b;
    b = temp;
}
void solve() {
    string s;
    cin >> s;
    int n = s.length();
    vector<ll> idx;
    ll op = 0;

    F(i, 0, n) {
        if (s[i] == '?') idx.push_back(i);
        op += s[i] == '(';
    }
    ll rem = n / 2 - op;
    F(i, 0, n) {
        if (rem && s[i] == '?') {
            s[i] = '(';
            rem--;
        }
    }
    F(i, 0, n) {
        if (s[i] == '?') {
            s[i] = ')';
        }
    }
    vector<ll> o;
    vector<ll> c;
    for (ll e : idx) {
        if (e != 0 && e != n - 1) {
            if (s[e] == '(') {
                o.push_back(e);
            }
            else {
                c.push_back(e);
            }
        }
    }

    if (c.size() && o.size()) {
        swap(s[c[0]], s[o.back()]);
        if (valid(s)) cout << "NO\n";
        else cout << "YES\n";
        return;
        // )( -> () no risk move
        // ((((()))))
        // if (c[0] < o.back()) {
        //     cout << "YES\n";
        //     return;
        // }
        // // () -> )(
        //     // problem if the opening parenthesis 
        //     // thats gonna be flipped has prefix sum >= 0 
        //     // also if closing parenthesis 
        //     // thats gonna be flipped has suffix sum >= 0
        //     // solution: find first opening parenthesis with prefix sum >= 0
        //     // and last closing parenthesis with suffix sum < 0
        //     // if the idxs of the two are in ascending order, then we good
        //     // else, its unique
        // vector<ll> pref(n);
        // vector<ll> suff(n);
        // ll sum = 0;
        // F(i, 0, n) {
        //     if (s[i] == '(') sum++;
        //     else sum--;
        //     pref[i] = sum;
        // }
        // sum = 0;
        // FFE(i, n - 1, 0) {
        //     if (s[i] == ')') sum++;
        //     else sum--;
        //     suff[i] = sum;
        // }
        // // suff[i] >=0 means that there are still ')'s to be balanced at the end
        // // pref[i] >=0 means that there are still '('s to be balanced from the beginning
        // for (ll e : c) {}
    }
    cout << "YES\n";

    // ?)?(??
    // ()(())
    // if youre flipping () -> )(, might not always work
    // ((())())
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