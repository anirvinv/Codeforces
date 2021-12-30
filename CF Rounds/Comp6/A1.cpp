#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int AB(string s)
{
    int count = 0;
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == 'a' && s[i + 1] == 'b')
        {
            count++;
        }
    }
    return count;
}
int BA(string s)
{
    int count = 0;
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == 'b' && s[i + 1] == 'a')
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int ab = AB(s);
        int ba = BA(s);

        if (ab > ba)
        {
        }
        else if (ba > ab)
        {
        }

        cout << s << endl;
    }
}