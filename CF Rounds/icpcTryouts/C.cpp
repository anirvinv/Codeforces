#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    string s;
    cin >> s;
    map<char, vector<int>> cm;
    set<int> cs;
    for (int i = 0; i < s.length(); i++) {
        cm[s[i]].push_back(i);
        cs.insert(s[i]);
    }
    for (auto c : cs) {
        if (cm[c].size() > 1) {
            for (int i = 0; i < cm[c].size(); i++) {
                for (int j = 0; j < cm[c].size(); j++) {
                    if (i < j) {
                        if ((cm[c][j] - cm[c][i] - 1) % 2 == 1) {
                            cout << "NO" << '\n';
                            return;
                        }
                    }
                }
            }
        }
    }
    cout << "YES" << '\n';
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