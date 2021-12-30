#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i, b, n, k) for (int i = b; i < n; i += k)
#define fo(i, n) for (int i = 0; i < n; i++)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    string s = "AGC";
    if (n >= 42)
    {
        n++;
    }

    if (n < 10)
    {
        s += "00" + to_string(n);
    }
    else
    {
        s += "0" + to_string(n);
    }
    cout << s << endl;
}