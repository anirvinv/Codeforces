#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
void solve() {
    int n;
    cin >> n;
    vector<int> alice;
    vector<int> bob;
    fo(i, n) {
        int value;
        cin >> value;
        if (value % 2 == 0) {
            alice.push_back(value);
        } else {
            bob.push_back(value);
        }
    }
    if (bob.size() > 1) {
        sort(all(bob));
    }
    if (alice.size() > 1) {
        sort(all(alice));
    }
    ll as = 0, bs = 0;
    int count = 0;
    while (alice.size() > 0 || bob.size() > 0) {
        if (count % 2 == 0) {
            // alice's turn
            if (alice.size() > 0 && bob.size() > 0) {
                if (alice.back() > bob.back()) {
                    as += alice.back();
                    alice.pop_back();

                } else {
                    bob.pop_back();
                }
            } else if (alice.size() == 0) {
                bob.pop_back();
            } else {
                as += alice.back();
                alice.pop_back();
            }
        } else {
            // bob's turn
            if (alice.size() > 0 && bob.size() > 0) {
                if (bob.back() > alice.back()) {
                    bs += bob.back();
                    bob.pop_back();

                } else {
                    alice.pop_back();
                }
            } else if (bob.size() == 0) {
                alice.pop_back();
            } else {
                bs += bob.back();
                bob.pop_back();
            }
        }
        count++;
    }
    if (as == bs) {
        cout << "Tie" << '\n';
    } else if (as > bs) {
        cout << "Alice" << '\n';
    } else {
        cout << "Bob" << '\n';
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