#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) ll x; cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    G(n);
    vector<int> a(n);
    F(i, n) cin >> a[i];
    vector<string> strings(n + 1);
    strings[0] = "";
    if (a[0] > 0) F(i, a[0]) strings[0] += 'a';
    else strings[0] = 'a';
    for (int i = 0; i < n - 1; i++) {
        if (a[i] == 0) {
            if (strings[i][0] == 'a') {
                F(j, max(1, a[i + 1])) { strings[i + 1] += 'b'; }
            }
            else {
                F(j, max(1, a[i + 1])) { strings[i + 1] += 'a'; }
            }
        }
        else {
            strings[i + 1] = strings[i].substr(0, a[i]);
        }
        if (strings[i + 1].size() < a[i + 1]) {
            if (strings[i].size() > a[i] && strings[i][a[i]] == 'a') F(j, a[i + 1] - a[i]) strings[i + 1] += 'b';
            else F(j, a[i + 1] - a[i]) strings[i + 1] += 'a';
        }
    }

    if (a.back() == 0) strings[strings.size() - 2][0] == 'a' ? strings[strings.size() - 1] = "b" : strings[strings.size() - 1] = "a";
    else {
        strings[strings.size() - 1] = strings[strings.size() - 2].substr(0, a.back());

    }

    for (string s : strings) {
        cout << s << '\n';
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