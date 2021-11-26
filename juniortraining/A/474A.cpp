#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

    string s1 = "qwertyuiop";
    string s2 = "asdfghjkl;";
    string s3 = "zxcvbnm,./";

    char c;
    cin >> c;
    string s;
    cin >> s;

    string ans;
    if (c == 'R')
    {
        for (int i = 0; i < s.length(); i++)
        {
            for (int j = 1; j < 10; j++)
            {
                if (s[i] == s1[j])
                {
                    ans += s1[j - 1];
                }
                if (s[i] == s2[j])
                {
                    ans += s2[j - 1];
                }
                if (s[i] == s3[j])
                {
                    ans += s3[j - 1];
                }
            }
        }
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if (s[i] == s1[j])
                {
                    ans += s1[j + 1];
                }
                if (s[i] == s2[j])
                {
                    ans += s2[j + 1];
                }
                if (s[i] == s3[j])
                {
                    ans += s3[j + 1];
                }
            }
        }
    }
    cout << ans << endl;
}