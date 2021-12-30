#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;

        cin >> n >> k;
        string ans = "";
        for (int i = 0; i < n; i++)
        {
            if (i % 3 == 0)
            {
                ans += "a";
            }
            else if (i % 3 == 1)
            {
                ans += "b";
            }
            else
            {
                ans += "c";
            }
        }
        cout << ans << endl;
    }
}