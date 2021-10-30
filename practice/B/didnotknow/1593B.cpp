#include <bits/stdc++.h>
using namespace std;

int min(int a, int b)
{
    if (a <= b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int moves = s.size();
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (s[i] == '5' && s[j] == '0')
                {
                    moves = min(moves, (n - j - 1) + (j - i - 1));
                }
                else if (s[i] == '7' && s[j] == '5')
                {
                    moves = min(moves, (n - j - 1) + (j - i - 1));
                }
                else if (s[i] == '2' && s[j] == '5')
                {
                    moves = min(moves, (n - j - 1) + (j - i - 1));
                }
                else if (s[i] == '0' && s[j] == '0')
                {
                    moves = min(moves, (n - j - 1) + (j - i - 1));
                }
            }
        }
        cout << moves << endl;
    }
}
//______i_______j________(n - 1)