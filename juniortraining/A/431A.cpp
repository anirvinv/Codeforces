#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int cals[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> cals[i];
    }

    string s;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < s.length(); i++)
    {
        ans += cals[(int)(s[i]) - 49];
    }
    cout << ans << endl;
}
