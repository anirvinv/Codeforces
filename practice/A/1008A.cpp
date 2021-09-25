#include <iostream>

using namespace std;

bool isVowel(char c)
{
    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
    bool vowel = false;
    for (int i = 0; i < 5; i++)
    {
        if (c == vowels[i])
        {
            vowel = true;
            break;
        }
    }
    return vowel;
}

int main()
{

    string word;

    cin >> word;
    bool berlanese = true;
    for (int i = 0; i < word.length() - 1; i++)
    {
        if (word[i] == 'n')
        {
        }
        else if (isVowel(word[i]))
        {
        }
        else
        {
            if (isVowel((word[i + 1])))
            {
            }
            else
            {
                berlanese = false;
                break;
            }
        }
    }
    char last = word[word.length() - 1];
    if (!isVowel(last) && last != 'n')
    {
        berlanese = false;
    }

    if (berlanese)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}