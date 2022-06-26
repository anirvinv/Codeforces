#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
void solve() {
    int n;
    cin >> n;
    int runningTotal = 0;
    while (n--) {
        char c;
        cin >> c;
        if (c == 'R') {
            int petals;
            cin >> petals;
            runningTotal += petals;
        }
        if (c == 'T') {
            cout << runningTotal << '\n';
        }
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