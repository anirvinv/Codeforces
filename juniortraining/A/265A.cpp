#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string t;
    string s;
    cin >> s;
    cin >> t;
    int position = 0;
    for (int i = 0; i < t.length(); i++)
    {
        if (t[i] == s[position])
        {
            position++;
        }
    }
    cout << position + 1 << endl;
}