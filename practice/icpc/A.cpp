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
#define N 9                                             // UPDATE?
#define M 3                                             // UPDATE?
#define S 3                                             // UPDATE?

int n = 9, m = 9, dfV = 0, smV = -1, mnV = 1, mxV = 9;  // IMPLEMENT
int gr[N][N], mk[M][N], em[S][N], sm[S][N];

bool lV(int r, int c) { return true; }  // IMPLEMENT

void add(int r, int c, int x, int s) {
    gr[r][c] = s > 0 ? x : dfV;
    F(i, M) mk[i][MT(r, c, i)] ^= 1 << (x - mnV);
}

bool bT(int r, int c) {
    if (r == n) return true;
    int rI = r + (c + 1) / m, cI = (c + 1) % m;
    if (gr[r][c] - dfV) return lV(r, c) && bT(rI, cI);
    int mask = mk[0][r] & mk[1][c] & mk[2][SQ(r, c)];  // UPDATE?
    int mnX = 1, mxX = 9;
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
    F(r, n) F(c, m) {  // need to reset board for test cases?
        G(x)           // are you using add() vs gr[][] properly?
        if (x - dfV) add(r, c, x, 1);  // need to check if input is consistent?
    }
}

int main() {
    init();
    bT(0, 0);
    D
}  // need to see if bT returns false?