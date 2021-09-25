#include <iostream>

using namespace std;

int main()
{
    int t;

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        int zeroes, ones;
        cin >> zeroes >> ones;
        cin >> s;

        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] == '0')
            {
                zeroes--;
            }
            else if (s[j] == '1')
            {
                ones--;
            }
        }

        bool complete = true;
        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] == '?')
            {
                complete = false;
                break;
            }
        }
        if (complete)
        {
            if (s.length() == 1)
            {
                if (s[0] == '0' && zeroes == 1)
                {
                    cout << s << endl;
                }
                else if (s[0] == '1' && ones == 1)
                {
                    cout << s << endl;
                }
                else
                {
                    cout << -1 << endl;
                }
            }

            else
            {
                for (int j = 0; j < s.length() / 2; j++)
                {
                    if (s[j] != s[s.length() - j - 1])
                    {
                        cout << -1 << endl;
                        break;
                    }
                    else if (zeroes != 0 || ones != 0)
                    {
                        cout << -1 << endl;
                        break;
                    }
                }
            }
        }
        else
        {
            for (int j = 0; j < s.length() / 2; j++)
            {
                if ((s[j] != '?' && s[s.length() - j - 1] == '?'))
                {
                    if (s[j] == '0')
                    {
                        zeroes--;
                    }
                    else
                    {
                        ones--;
                    }
                    s[s.length() - j - 1] = s[j];
                }
                else if ((s[j] == '?' && s[s.length() - j - 1] != '?'))
                {
                    if (s[s.length() - j - 1] == '0')
                    {
                        zeroes--;
                    }
                    else
                    {
                        ones--;
                    }
                    s[j] = s[s.length() - j - 1];
                }
            }

            for (int j = 0; j < s.length() / 2; j++)
            {
                if (s[j] == '?')
                {
                    if (zeroes >= 2)
                    {
                        s[j] = '0';
                        s[s.length() - j - 1] = '0';
                        zeroes -= 2;
                    }
                    else if (ones >= 2)
                    {
                        s[j] = '1';
                        s[s.length() - j - 1] = '1';
                        ones -= 2;
                    }
                }
            }

            if (s.length() % 2 != 0)
            {
                if (zeroes == 1)
                {
                    s[s.length() / 2] = '0';
                    zeroes--;
                }
                else if (ones == 1)
                {
                    s[s.length() / 2] = '1';
                    ones--;
                }
            }
            if (zeroes == 0 && ones == 0)
            {
                cout << s << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
}