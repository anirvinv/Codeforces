#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i, b, n, k) for (int i = b; i < n; i += k)
#define fo(i, n) for (int i = 0; i < n; i++)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;

    if (s.find("oxo") == string::npos && s.find("xxx") == string::npos && s.find("oo") == string::npos)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}