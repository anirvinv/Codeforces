#include <iostream>

using namespace std;

int main()
{

    int t;

    cin >> t;

    for (size_t i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        string result = "";

        for (int j = 0; j < n; j++)
        {
            if (s[j] == 'L')
            {
                result += "L";
            }
            else if (s[j] == 'R')
            {
                result += "R";
            }
            else if (s[j] == 'U')
            {
                result += "D";
            }
            else
            {
                result += "U";
            }
        }
        cout << result << endl;
    }
}