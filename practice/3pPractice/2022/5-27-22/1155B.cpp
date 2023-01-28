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
    int e = 0;
    set<int> eights;
    F(i, 0, n) {
        e += s[i] == '8';
        if (s[i] == '8') {
            eights.insert(i);
        }
    }
    if (e <= (n - 11) / 2) {
        cout << "NO" << '\n';
        return;
    }
    int erase = n - 11;
    // first erase/2 8s will be gone and first erase/2 non 8s will be gone
    string output = "";
    int gone = erase / 2;
    int count1 = 0;
    int count2 = 0;
    F(i, 0, n) {
        if (s[i] == '8') {
            if (count1 < gone) {
                count1++;
            }
            else {
                output.push_back(s[i]);
            }
        }
        else {
            if (count2 < gone) {
                count2++;
            }
            else {
                output.push_back(s[i]);
            }
        }
    }
    if (output[0] == '8') {
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
    // cin >> t;
    t = 1;
    while (t--) {
        solve();
    }
}