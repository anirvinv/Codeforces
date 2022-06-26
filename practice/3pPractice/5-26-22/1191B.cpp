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
    string s1;
    cin >> s1;
    string s2;
    cin >> s2;
    string s3;
    cin >> s3;
    string a[3] = { s1,s2,s3 };

    if (a[0] == a[1] && a[0] == a[2]) {
        cout << "0\n";
        return;
    }
    if (a[0][1] == a[1][1] && a[0][1] == a[2][1]) {
        vector<int> consec;
        F(i, 0, 3) {
            consec.push_back(a[i][0] - '0');
        }
        sort(all(consec));
        F(i, 0, 2) {
            if (consec[i] + 1 != consec[i + 1]) {
                break;
            }
            if (i == 1) {
                cout << "0\n";
                return;
            }
        }
    }

    F(i, 0, 3) {
        F(j, 0, 3) {
            if (j != i) {
                if (a[i][1] == a[j][1]) {
                    int x = a[i][0] - '0';
                    int y = a[j][0] - '0';
                    if (abs(x - y) <= 2) {
                        cout << "1\n";
                        return;
                    }
                }
            }
        }
    }
    cout << "2\n";

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