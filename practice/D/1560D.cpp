#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'

int sl(string a, string b, int& ai, int& ki) {
    int count = 0;
    int i = 0;
    int k = 0;
    while (k < b.length()) {
        char c = b[k];
        while (i < a.length()) {
            if (a[i] == c) {
                k++;
                ki = k;
                i++;
                ai = i;
                count++;
                break;
            }
            i++;
            ai = i;
        }
        if (i == a.length()) {
            return count;
        }
    }
    return count;
}

void solve() {
    string arr[63];
    for (int i = 0; i < 63; i++) {
        arr[i] = to_string((1ull << i));
    }
    string n;
    cin >> n;
    int minCost = INT_MAX;
    int occ[10];

    for (int i = 0; i < 63; i++) {
        int ai = 0;
        int ki = 0;
        int cost = n.length() - sl(n, arr[i], ai, ki);
        memset(occ, 0, sizeof occ);
        for (int i = ai; i < n.length(); i++) {
            occ[(n[i] - '0')]++;
        }
        // delete this many characters
        for (int j = ki; j < arr[i].length(); j++) {
            if (occ[(arr[i][j] - '0')] == 0) {
                cost++;
            } else {
                occ[(arr[i][j] - '0')]--;
            }
        }
        minCost = min(minCost, cost);
        // cout << n << " " << arr[i] << " " << cost << '\n';
    }
    cout << minCost << '\n';
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