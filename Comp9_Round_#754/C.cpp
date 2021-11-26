#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string perm1 = "aa";
        string perm2[] = {"aba", "aab", "baa"};
        string perm3[] = {"aca", "aac", "caa"};
        string perm4[] = {"aabc", "aacb", "abac", "abca", "acab", "acba", "baac", "baca", "bcaa", "caab", "caba", "cbaa"};
        vector<string> perms;
        perms.push_back("aa");
        for (int i = 0; i < 3; i++)
        {
            perms.push_back(perm2[i]);
        }
        for (int i = 0; i < 3; i++)
        {
            perms.push_back(perm3[i]);
        }
        for (int i = 0; i < 12; i++)
        {
            perms.push_back(perm4[i]);
        }
        bool fin = false;
        for (string p : perms)
        {
            size_t found = s.find(p);
            if (found != std::string::npos)
            {
                fin = true;
                cout << p.length() << endl;
                break;
            }
        }
        if (!fin)
        {
            cout << -1 << endl;
        }
    }
}