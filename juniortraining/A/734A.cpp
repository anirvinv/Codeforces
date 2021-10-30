#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int d = 0;
    int a = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'D')
        {
            d++;
        }
        else
        {
            a++;
        }
    }

    if (a > d)
    {
        cout << "Anton" << endl;
    }
    else if (d > a)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }
}