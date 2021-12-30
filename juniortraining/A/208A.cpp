#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void print(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    string res = "";
    if (s.length() > 3)
    {
        for (int i = 0; i < s.length() - 2; i++)
        {
            if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
            {
                s[i] = ' ';
                s[i + 1] = ' ';
                s[i + 2] = ' ';
                i += 2;
            }
        }
        for (int i = 0; i < s.length(); i++)
        {

            if (s[i] == ' ' && i < s.length() - 1)
            {
                if (s[i + 1] != ' ')
                {
                    res += s[i];
                }
            }
            else
            {
                res += s[i];
            }
        }
        if (res[0] == ' ')
        {
            res = res.substr(1, res.length() - 1);
        }
    }
    else
    {
        res += s;
    }
    cout << res << endl;
}