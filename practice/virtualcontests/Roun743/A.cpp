#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (size_t i = 0; i < t; i++)
    {
        int n;
        string s;

        cin >> n;
        cin >> s;
        int leadingZeroes = 0;
        for (size_t j = 0; j < n; j++)
        {
            if (s[j] == '0')
            {
                leadingZeroes++;
            }
            else
            {
                break;
            }
        }
        int steps = 0;
        s = s.substr(leadingZeroes, n - leadingZeroes);
        if (s == "")
        {
            cout << 0 << endl;
        }
        else
        {
            int counter = 0;
            while (s.length() != 0)
            {

                int val = (int)s[s.length() - 1] - 48;
                steps += val;
                if (val != 0 && counter != 0)
                {
                    steps += 1;
                }
                s = s.substr(0, s.length() - 1);
                counter++;
            }
            cout << steps << endl;
        }
    }
}