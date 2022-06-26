#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
void solve()
{
    int n;
    cin >> n;
    string s1;
    cin >> s1;
    string s2;
    cin >> s2;

    int totalOnes = 0;
    int totalZeroes = 0;
    fo(i, n)
    {
        if (s1[i] != s2[i])
        {
            int idx = i;
            int ones1 = 0;
            int zeroes1 = 0;
            int ones2 = 0;
            while (s1[idx] != s2[idx] && idx < n)
            {
                ones1 += s1[idx] == '1';
                zeroes1 += s1[idx] == '0';

                ones2 += s2[idx] == '1';

                totalOnes += s1[idx] == '1';
                totalZeroes += s1[idx] == '0';
                idx++;
            }
            if ((ones1 != ones2 || ones1 != zeroes1) || (totalOnes != totalZeroes))
            {
                cout << "NO" << '\n';
                return;
            }
            i = idx;
            totalOnes += s1[i] == '1';
            totalZeroes += s1[i] == '0';
        }
        else
        {
            totalOnes += s1[i] == '1';
            totalZeroes += s1[i] == '0';
        }
    }
    cout << "YES" << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    // t= 1;
    while (t--)
    {
        solve();
    }
}