#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i, b, n, k) for (int i = b; i < n; i += k)
#define fo(i, n) for (int i = 0; i < n; i++)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string rows[2];
    cin >> rows[0] >> rows[1];
    if ((rows[0][0] == '.' && rows[1][1] == '.') || (rows[0][1] == '.' && rows[1][0] == '.'))
    {
        cout << "No" << '\n';
    }
    else
    {
        cout << "Yes" << '\n';
    }
}