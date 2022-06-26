#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    int c0 = 0, c1 = 0, c2 = 0;
    fo(i, n) {
        cin >> arr[i];
        c0 += arr[i] % 3 == 0;
        c1 += arr[i] % 3 == 1;
        c2 += arr[i] % 3 == 2;
    }
    int avg = (c0 + c1 + c2) / 3;
    int cs[3] = {c0, c1, c2};

    int idx = 0;
    int moves = 0;
    while (cs[0] != avg || cs[1] != avg || cs[2] != avg) {
        idx %= 3;
        if (cs[idx] > avg) {
            cs[(idx + 1) % 3] += (cs[idx] - avg);
            moves += (cs[idx] - avg);
            cs[idx] = avg;
        }
        idx++;
    }
    cout << moves << '\n';
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