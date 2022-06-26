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
#define N 12                                            // UPDATE?
#define M 2                                             // UPDATE?
#define S 3                                             // UPDATE?

int n = -1, m = -1, dfV = -1, smV = -1, mnV = 1, mxV = N;  // IMPLEMENT
int gr[N][N], mk[M][N];
bool p[N][N][N][N];

bool lV(int r, int c) {
    for (int i = -1; i <= 1; i++) {
        for (int j = -1; j <= 1; j++) {
            if (gr[r + i][c + j] != 0) {
                if ((i || j) && OK(r + i, c + j)) {
                    if (p[r][c][r + i][c + j] &&
                        abs(gr[r][c] - gr[r + i][c + j]) != 1) {
                        return false;
                    } else if (!p[r][c][r + i][c + j] &&
                               abs(gr[r][c] - gr[r + i][c + j]) == 1) {
                        return false;
                    }
                }
            }
        }
    }
    return true;
}  // IMPLEMENT

void add(int r, int c, int x, int s) {
    gr[r][c] = s > 0 ? x : dfV;
    mk[0][r] ^= 1 << (x - mnV);
    mk[1][c] ^= 1 << (x - mnV);
}

bool bT(int r, int c) {
    if (r == n) return true;
    int rI = r + (c + 1) / m, cI = (c + 1) % m;
    if (gr[r][c] - dfV) return lV(r, c) && bT(rI, cI);
    int mask = mk[0][r] & mk[1][c];  // UPDATE?
    int mnX = 1, mxX = N;
    for (int x = mnX; x <= mxX && mask >> (x - mnV); ++x)
        if ((mask >> (x - mnV)) & 1) {
            add(r, c, x, 1);
            if (lV(r, c) && bT(rI, cI)) return true;
            add(r, c, x, -1);
        }
    return false;
}

void init() {  // are you indexing properly with the input?
    F(i, M) fill_n(mk[i], N, (1 << (mxV - mnV + 1)) - 1);  // UPDATE?
    // F(i, S) {
    //     fill_n(em[i], N, n);    // UPDATE?
    //     fill_n(sm[i], N, smV);  // UPDATE?
    // }
    G(asd);
    n = asd;
    m = asd;
    G(k);
    F(i, 2 * asd - 1) {
        string s;
        cin >> s;
        F(j, s.length()) {
            if (s[j] == '1') {
                if (i & 1) {
                    p[i / 2][j][i / 2 + 1][j] = true;
                    p[i / 2 + 1][j][i / 2][j] = true;
                } else if (i % 2 == 0) {
                    p[i / 2][j][i / 2][j + 1] = true;
                    p[i / 2][j + 1][i / 2][j] = true;
                }
                // cout << i << " " << j << '\n';
            }
        }
    }

    F(i, k) {
        G(r) G(c) G(v);
        add(r - 1, c - 1, v, 1);
    }

    // F(r, n) F(c, m) {  // need to reset board for test cases?
    //     G(x)           // are you using add() vs gr[][] properly?
    //     if (x - dfV) add(r, c, x, 1);  // need to check if input is
    //     consistent?
    // }
    // cout << p[2][2][2][3] << '\n';
}

int main() {
    init();
    bT(0, 0);
    D
}  // need to see if bT returns false?