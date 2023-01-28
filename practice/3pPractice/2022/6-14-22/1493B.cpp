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

pair<ll, ll> getTime(string s) {
    return { stoi(s.substr(0, 2)), stoi(s.substr(3, 2)) };
}

bool works(pair<ll, ll> time, ll h, ll m) {
    return (time.first < h) && (time.second < m);
}

pair<ll, ll> reflect(pair<ll, ll> time) {
    int mp[9];
    mp[0] = 0;
    mp[1] = 1;
    mp[2] = 5;
    mp[5] = 2;
    mp[8] = 8;
    return make_pair(mp[(time.second % 10)] * 10 + mp[time.second / 10], mp[time.first % 10] * 10 + mp[time.first / 10]);

}

ll getElapsedTime(pair<ll, ll> from, pair<ll, ll> to, ll h, ll m) {
    // returns time in minutes

    // total mins in a day
    ll totalminutes = m * h;

    ll fromMins = from.first * m + from.second;
    ll toMins = to.first * m + to.second;

    if (fromMins <= toMins) {
        return toMins - fromMins;
    }
    else {
        return totalminutes - (fromMins - toMins);
    }

}
string toTime(pair<ll, ll> time) {
    string ans = "";
    ans.push_back(time.first / 10 + '0');
    ans.push_back(time.first % 10 + '0');
    ans.push_back(':');
    ans.push_back(time.second / 10 + '0');
    ans.push_back(time.second % 10 + '0');
    return ans;
}
void solve() {
    G(h) G(m);
    string s;
    cin >> s;
    pair<ll, ll> time = getTime(s);
    // cout << time.first << " " << time.second << '\n';
    vector<ll> valid = { 0,1,2,5,8 };


    pair<ll, ll> ans = { -1,-1 };
    ll elapsed = LLONG_MAX;
    F(i, 0, 5) {
        F(j, 0, 5) {
            F(k, 0, 5) {
                F(l, 0, 5) {
                    ll hr = 10 * valid[i] + valid[j];
                    ll mn = 10 * valid[k] + valid[l];
                    pair<ll, ll> p = make_pair(hr, mn);
                    ll elt = getElapsedTime(time, p, h, m);
                    if (works(p, h, m) && works(reflect(p), h, m)) {
                        if (elt < elapsed) {
                            ans.first = hr;
                            ans.second = mn;
                            elapsed = elt;
                        }
                    }
                }
            }
        }
    }
    cout << toTime(ans) << '\n';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    // t = 1;
    while (t--) {
        solve();
    }
}