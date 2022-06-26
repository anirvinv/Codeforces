// Backtracking
#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
using namespace std;

#define F(i, k) for (int i = 0; i < (k); ++i)
#define G(x) \
    int x;   \
    cin >> x;
#define D F(i, n) F(j, m) cout << gr[i][j] << " \n"[j == m - 1];
#define OK(r, c) (r >= 0 && c >= 0 && r < n && c < m)
#define SQ(r, c) ((r) / 3 + 3 * ((c) / 3))              // UPDATE?
#define MT(r, c, i) (!i ? r : (i == 1 ? c : SQ(r, c)))  // UPDATE?
#define ST(r, c, i) (!i ? r : (i == 1 ? c : SQ(r, c)))  // UPDATE?
#define N 7                                             // UPDATE?
#define M 1                                             // UPDATE?
#define S 3                                             // UPDATE?

int n = -1, m = -1, dfV = -1, smV = -1, mnV = 1, mxV = 7;  // IMPLEMENT
int gr[N][N], mk[49], em[S][N], sm[S][N];
pair<int, int> p[N][N];

bool lV(int r, int c) {
    for (int i = -1; i <= 1; i++) {
        for (int j = -1; j <= 1; j++) {
            if ((i || j) && OK(r + i, c + j) && gr[r + i][c + j] == gr[r][c]) {
                return false;
            }
        }
    }
    return true;
}  // IMPLEMENT

void add(int r, int c, int x, int s) {
    gr[r][c] = s > 0 ? x : 0;
    F(i, M) {
        if (x != dfV) {
            mk[p[r][c].first] ^= 1 << (x - mnV);
        }
    }
}

int getX(int r, int c, bool mn) {  // distinct element optimization?
    int ans = mn ? mnV : mxV;
    F(i, S) {
        int t1 = sm[i][ST(r, c, i)], t2 = em[i][ST(r, c, i)] - 1;
        ans = mn ? max(ans, t1 - t2 * mxV) : min(ans, t1 - t2 * mnV);
    }
    return ans;
}

bool bT(int r, int c) {
    if (r == n) return true;
    int rI = r + (c + 1) / m, cI = (c + 1) % m;
    if (gr[r][c] - dfV) return lV(r, c) && bT(rI, cI);
    int mask = mk[p[r][c].first];  // UPDATE?
    int mnX = 1, mxX = p[r][c].second;
    for (int x = mnX; x <= mxX && mask >> (x - mnV); ++x) {
        if ((mask >> (x - mnV)) & 1) {
            add(r, c, x, 1);
            if (lV(r, c) && bT(rI, cI)) return true;
            add(r, c, x, -1);
        }
    }
    return false;
}

bool isNum(char c) { return (c != ',' && c != ' ' && c != '(' && c != ')'); }

void init() {  // are you indexing properly with the input?
    F(i, M) fill_n(mk, N, (1 << (mxV - mnV + 1)) - 1);  // UPDATE?
    // F(i, S) {
    //     fill_n(em[i], N, n);    // UPDATE?
    //     fill_n(sm[i], N, smV);  // UPDATE?
    // }
    G(k) G(r) G(c);
    n = r;
    m = c;

    F(i, n) {
        F(j, m) {
            char c;
            cin >> c;
            if (c == '-') {
                gr[i][j] = dfV;
            } else {
                gr[i][j] = c - '0';
            }
        }
    }

    G(comp);
    F(t, comp + 1) {
        string s;
        getline(cin, s);
        int k = s[0] - '0';
        int x = 0;
        int y = 0;
        vector<pair<int, int>> coords;
        for (int j = 1; j < s.length(); j++) {
            if (isNum(s[j]) && s[j + 1] == ',') {
                x = s[j] - '0';
            } else if (isNum(s[j])) {
                y = s[j] - '0';
            }
            coords.push_back(make_pair(x - 1, y - 1));
        }
        for (auto c : coords) {
            p[c.first][c.second] = make_pair(t, k);
        }
    }
    // F(i, n) F(j, m) cout << p[i][j].first << " \n"[j == m - 1];

    F(r, n)
    F(c, m) {  // need to reset board for test cases?
               // are you using add() vs gr[][] properly?
        if (gr[r][c] == dfV)
            add(r, c, dfV, 1);
        else
            add(r, c, gr[r][c], 1);  // need to check if input is
        // consistent ?
    }
}

int main() {
    G(t);
    while (t--) {
        init();
        bT(0, 0);
        D;
    }
}  // need to see if bT returns false?