#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n, k;
    cin >> n >> k;
    string block = "";
    for (int i = 0; i < k; i++)
    {
        block += (char)(97 + i);
    }

    string ans = "";

    for (int i = 0; i < n; i++)
    {
        ans += block[i % block.length()];
    }
    cout << ans << endl;
}