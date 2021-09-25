#include <iostream>

using namespace std;

int solve(string s)
{
    int counter[s.length()];
    int value = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
        {
            value++;
        }
        else
        {
            value--;
        }
        counter[i] = value;
    }
    int min = counter[0];

    for (int i = 0; i < s.length(); i++)
    {
        if (counter[i] < min)
        {
            min = counter[i];
        }
    }

    return min * -1;
}

int main()
{

    int t;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        string s;
        int n;
        cin >> n;
        cin >> s;
        int moves = solve(s);

        cout << moves << endl;
    }
}