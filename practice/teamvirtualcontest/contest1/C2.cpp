#include <iostream>

using namespace std;

bool couldBePalindrome(string s)
{

    bool palindrome = true;
    for (size_t i = 0; i < s.length() / 2; i++)
    {
        if (s[i] == '?' || s[s.length() - i - 1] == '?')
        {
            continue;
        }
        else if (s[i] != s[s.length() - i - 1])
        {
            palindrome = false;
            break;
        }
    }
    return palindrome;
}

string fillPalindrome(string s, int zeroes, int ones)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
        {
            zeroes--;
        }
        else if (s[i] == '1')
        {
            ones--;
        }
    }

    for (int i = 0; i < s.length() / 2; i++)
    {
        int mirrored = s.length() - i - 1;
        if (s[i] == '?' && s[mirrored] != '?')
        {
            if (s[mirrored] == '0')
            {
                zeroes--;
            }
            else
            {
                ones--;
            }
            s[i] = s[mirrored];
        }
        else if (s[i] != '?' && s[mirrored] == '?')
        {
            if (s[i] == '0')
            {
                zeroes--;
            }
            else
            {
                ones--;
            }
            s[mirrored] = s[i];
        }
    }

    if (s.length() % 2 != 0)
    {
        if (zeroes % 2 != 0)
        {
            s[s.length() / 2] = '0';
            zeroes--;
        }
        else if (ones % 2 != 0)
        {
            s[s.length() / 2] = '1';
            ones--;
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

    if (zeroes != 0 || ones != 0)
    {
        return "N/A";
    }
    else
    {
        return s;
    }
}

int main()
{
    int t;
    cin >> t;

    for (size_t i = 0; i < t; i++)
    {
        int zeroes, ones;
        string s;
        cin >> zeroes >> ones;
        cin >> s;

        if (couldBePalindrome(s))
        {
            string filled = fillPalindrome(s, zeroes, ones);
            if (filled == "N/A")
            {
                filled = "-1";
            }
            cout << filled << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}