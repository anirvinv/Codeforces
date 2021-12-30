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
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        int ba = BA(s);
        int ab = AB(s);
        if (ba > ab)
        {
            // first occuring index
            int index = 0;
            for (int i = 0; i < s.length() - 1; i++)
            {
                if (s[i] == 'b' && s[i + 1] == 'a')
                {
                    index = i;
                    break;
                }
            }
            s[index] = 'a';

            if (!(AB(s) == BA(s)))
            {
                s[index] = 'b';
                s[index + 1] = 'b';
            }
            // last occuring index
            if (!(AB(s) == BA(s)))
            {
                s[index + 1] = 'a';
                int index = 0;
                for (int i = 0; i < s.length() - 1; i++)
                {
                    if (s[i] == 'b' && s[i + 1] == 'a')
                    {
                        index = i;
                    }
                }
                s[index] = 'a';
                s[index + 1] = 'a';
            }
            if (!(AB(s) == BA(s)))
            {
                s[index] = 'b';
                s[index + 1] = 'b';
            }
        }
        else if (ab > ba)
        {
            int index = 0;
            for (int i = 0; i < s.length() - 1; i++)
            {
                if (s[i] == 'a' && s[i + 1] == 'b')
                {
                    index = i;
                    break;
                }
            }
            s[index + 1] = 'a';

            if (!(AB(s) == BA(s)))
            {
                s[index] = 'b';
                s[index + 1] = 'b';
            }
            // last occuring index
            if (!(AB(s) == BA(s)))
            {
                s[index] = 'a';
                int index = 0;
                for (int i = 0; i < s.length() - 1; i++)
                {
                    if (s[i] == 'a' && s[i + 1] == 'b')
                    {
                        index = i;
                    }
                }
                s[index + 1] = 'a';
            }
            if (!(AB(s) == BA(s)))
            {
                s[index] = 'b';
                s[index + 1] = 'b';
            }
        }
        else
        {
        }
        cout << s << endl;
    }
}