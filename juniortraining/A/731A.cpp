#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    map<char, int> alph;
    for (int i = 97; i <= 122; i++)
    {
        alph[(char)i] = i - 97;
    }
    // for (auto it = alph.begin(); it != alph.end(); it++)
    // {
    //     cout << it->first << " " << it->second << " ";
    //     cout << endl;
    // }

    string s;
    cin >> s;
    int current = 0;
    int rotations = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int r1 = abs(current - alph[s[i]]);
        int bigger = max(current, alph[s[i]]);
        int smaller = min(current, alph[s[i]]);
        int r2 = abs(26 - bigger + smaller);
        current = alph[s[i]];
        if (r1 <= r2)
        {
            rotations += r1;
        }
        else
        {
            rotations += r2;
        }
    }
    // int r1 = abs(current - alph[s[0]]);
    // int bigger = max(current, alph[s[0]]);
    // int smaller = min(current, alph[s[0]]);
    // int r2 = abs(26 - bigger + smaller);
    // cout << r1 << " " << r2 << endl;
    cout << rotations << endl;
}